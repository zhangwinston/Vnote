#ifndef NEWNOTEDIALOG_H
#define NEWNOTEDIALOG_H

#include "scrolldialog.h"

class QComboBox;
class QPlainTextEdit;

namespace vnotex
{
    class Notebook;
    class Node;
    class NodeInfoWidget;

    class NewNoteDialog : public ScrollDialog
    {
        Q_OBJECT
    public:
        // New a note under @p_node.
        NewNoteDialog(Node *p_node, QWidget *p_parent = nullptr);

        const QSharedPointer<Node> &getNewNode() const;

        bool quickNewNote();

    protected:
        void acceptedButtonClicked() Q_DECL_OVERRIDE;

    private:
        void setupUI(const Node *p_node);

        void setupNodeInfoWidget(const Node *p_node, QWidget *p_parent);

        void setupTemplateComboBox(QWidget *p_parent);

        bool validateInputs();

        bool validateNameInput(QString &p_msg);

        bool newNote();

        void initDefaultValues(const Node *p_node);

        QString getTemplateContent() const;

        void updateCurrentTemplate();

        NodeInfoWidget *m_infoWidget = nullptr;

        QComboBox *m_templateComboBox = nullptr;

        QPlainTextEdit *m_templateTextEdit = nullptr;

        QString m_templateContent;

        QSharedPointer<Node> m_newNode;

        static QString s_lastTemplate;
    };
} // ns vnotex

#endif // NEWNOTEDIALOG_H
