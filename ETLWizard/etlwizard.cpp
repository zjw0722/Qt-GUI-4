#include "etlwizard.h"
#include "firstpage.h"
#include "secondpage.h"
#include "thirdpage.h"
#include "forthpage.h"
#include "fifthpage.h"


EtlWizard::EtlWizard(QWidget *parent) :
    QWizard(parent)
{
    setWizardStyle(QWizard::ModernStyle);
    addPage(new FirstPage);
    addPage(new SecondPage);
    addPage(new ThirdPage);
    addPage(new ForthPage);
    addPage(new FifthPage);
    show();
}
