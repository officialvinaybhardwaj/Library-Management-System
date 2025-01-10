#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


struct book{
    char name[30];
    char author[30];
    int id;
    struct book *next;
};

struct student{
    char name[30];
    char email[20];
    char book[20];
    char a[30];
    int id;
    struct student *next;
};

struct book *start_lib=NULL;
struct student *start=NULL;
struct book *initialize_lib(struct book *);
struct student *book_issue(struct student *);
struct student *book_return(struct student *);
struct book *diplay_lib(struct book *);
struct book *delete_book(int);
struct book *add_book(char [],char [],int);
void display(struct student *);
void greetings();
void main_menu();

int main(){
    start_lib=initialize_lib(start_lib);
    greetings();
    main_menu();
    return 0;
}

void greetings(){
    printf("\n\n");
    printf("\t\t\t     ****************************************\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *     ----------------------------     *\n");
    printf("\t\t\t     *      WELCOME TO STUDENT LIBRARY      *\n");
    printf("\t\t\t     *     ----------------------------     *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     ****************************************\n");
    printf("\n\n");
    printf("\t\t\t     ****************************************\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *       ------------------------       *\n");
    printf("\t\t\t     *           STUDENT LIBRARY            *\n");
    printf("\t\t\t     *       ------------------------       *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     *         JIIt,Noida,U.P,India         *\n");
    printf("\t\t\t     *     Email: studentlib@gmail.com      *\n");
    printf("\t\t\t     *     Contact:8800000010,8800000020    *\n");
    printf("\t\t\t     *                                      *\n");
    printf("\t\t\t     ****************************************\n");
    printf("\n\n\t\t\t             Press any key to continue: ");
    getch();
}

void main_menu(){
    int choice;
    do{
        printf("\n\n");
        printf("\n\t\t\t*************************************************\n");
        printf("\n\t\t\t\t      MAIN MENU: ");
        printf("\n\t\t\t\t     1.ISSUE OF BOOKS ");
        printf("\n\t\t\t\t     2.RETURN OF BOOKS ");
        printf("\n\t\t\t\t     3.DISPLAY STUDENT DETAILS ");
        printf("\n\t\t\t\t     4.EXIT\n ");
        printf("\n\t\t\t*************************************************\n");
        printf("\n\t\t\t\t      Enter your choice:- ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                start=book_issue(start);
                break;
            }
            case 2:{
                start=book_return(start);
                break;
            }
            case 3:{
                display(start);
                break;
            }
            case 4:{
                exit(1);
            }
            default:{
                printf("\n\t\t\t\t      ...Invalid Option!...\n");
                printf("\n\t\t\t\t      Press any key to try again: ");
                getch();
            }
        }
    }while(choice!=4);
}

struct book *initialize_lib(struct book *start){
    struct book *ptr , *new_book1 , *new_book2 , *new_book3,*new_book4,*new_book5,*new_book6,*new_book7,*new_book8,*new_book9,*new_book10,
            *new_book11,*new_book12,*new_book13,*new_book14,*new_book15,*new_book16,*new_book17,*new_book18,*new_book19,*new_book20,
            *new_book21,*new_book22,*new_book23,*new_book24,*new_book25,*new_book26,*new_book27,*new_book28,*new_book29,*new_book30,
            *new_book31,*new_book32,*new_book33,*new_book34,*new_book35,*new_book36,*new_book37,*new_book38,*new_book39,*new_book40,
            *new_book41,*new_book42,*new_book43,*new_book44,*new_book45,*new_book46,*new_book47,*new_book48,*new_book49,*new_book50,
            *new_book51,*new_book52,*new_book53,*new_book54,*new_book55,*new_book56,*new_book57,*new_book58,*new_book59,*new_book60,
            *new_book61,*new_book62,*new_book63,*new_book64,*new_book65,*new_book66,*new_book67,*new_book68,*new_book69,*new_book70,
            *new_book71,*new_book72,*new_book73,*new_book74,*new_book75;

    new_book1=(struct book*)malloc(sizeof(struct book));
    new_book1->next=NULL;
    start_lib=new_book1;
    strcpy(new_book1->name,"The Kite Runner");
    strcpy(new_book1->author,"Khaled Hosseini");
    new_book1->id=101;
    ptr=new_book1;

    new_book2=(struct book*)malloc(sizeof(struct book));
    new_book2->next=NULL;
    strcpy(new_book2->name,"To Kill A Mockingbird");
    strcpy(new_book2->author,"Harper Lee");
    new_book2->id=102;
    ptr->next=new_book2;
    ptr=new_book2;

    new_book3=(struct book*)malloc(sizeof(struct book));
    new_book3->next=NULL;
    strcpy(new_book3->name,"The Alchemist");
    strcpy(new_book3->author,"Paulo Coelho");
    new_book3->id=103;
    ptr->next=new_book3;
    ptr=new_book3;

    new_book4=(struct book*)malloc(sizeof(struct book));
    new_book4->next=NULL;
    strcpy(new_book4->name,"Pride And Prejudice");
    strcpy(new_book4->author,"Jane Austen");
    new_book4->id=104;
    ptr->next=new_book4;
    ptr=new_book4;

    new_book5=(struct book*)malloc(sizeof(struct book));
    new_book5->next=NULL;
    strcpy(new_book5->name,"A Tale Of Two Cities");
    strcpy(new_book5->author,"Charles Dickens");
    new_book5->id=105;
    ptr->next=new_book5;
    ptr=new_book5;
    
    new_book6=(struct book*)malloc(sizeof(struct book));
    new_book6->next=NULL;
    strcpy(new_book6->name,"The India Story");
    strcpy(new_book6->author,"Bimal Jalal");
    new_book6->id=106;
    ptr->next=new_book6;
    ptr=new_book6;
    
    new_book7=(struct book*)malloc(sizeof(struct book));
    new_book7->next=NULL;
    strcpy(new_book7->name,"A Place Called Home");
    strcpy(new_book7->author,"Preeti Shenoy");
    new_book7->id=107;
    ptr->next=new_book7;
    ptr=new_book7;
    
    new_book8=(struct book*)malloc(sizeof(struct book));
    new_book8->next=NULL;
    strcpy(new_book8->name,"Lal Salam");
    strcpy(new_book8->author,"Smriti Irani");
    new_book8->id=108;
    ptr->next=new_book8;
    ptr=new_book8;
    
    new_book9=(struct book*)malloc(sizeof(struct book));
    new_book9->next=NULL;
    strcpy(new_book9->name,"The Maverick Effect");
    strcpy(new_book9->author,"Harish Mehta");
    new_book9->id=109;
    ptr->next=new_book9;
    ptr=new_book9;
    
    new_book10=(struct book*)malloc(sizeof(struct book));
    new_book10->next=NULL;
    strcpy(new_book10->name,"Tomb of Sand");
    strcpy(new_book10->author,"Geetanjali Shree’s");
    new_book10->id=1010;
    ptr->next=new_book10;
    ptr=new_book10;
    
    new_book11=(struct book*)malloc(sizeof(struct book));
    new_book11->next=NULL;
    strcpy(new_book11->name,"On Board: My Years in BCCI");
    strcpy(new_book11->author,"Ratnakar Shetty’s");
    new_book11->id=1011;
    ptr->next=new_book11;
    ptr=new_book11;
    
    new_book12=(struct book*)malloc(sizeof(struct book));
    new_book12->next=NULL;
    strcpy(new_book12->name,"On Writing: A Memoir of the Craft");
    strcpy(new_book12->author,"Stephen King");
    new_book12->id=1012;
    ptr->next=new_book12;
    ptr=new_book12;
    
    new_book13=(struct book*)malloc(sizeof(struct book));
    new_book13->next=NULL;
    strcpy(new_book13->name,"More than Just Surgery: Life Lessons Beyond the OT ");
    strcpy(new_book13->author,"Dr Tehemton Erach Udwadia");
    new_book13->id=1013;
    ptr->next=new_book13;
    ptr=new_book13;
    
    new_book14=(struct book*)malloc(sizeof(struct book));
    new_book14->next=NULL;
    strcpy(new_book14->name,"Fearless Governance");
    strcpy(new_book14->author,"Dr. Kiran Bedi");
    new_book14->id=1014;
    ptr->next=new_book14;
    ptr=new_book14;
    
    new_book15=(struct book*)malloc(sizeof(struct book));
    new_book15->next=NULL;
    strcpy(new_book15->name,"A Nation To Protect");
    strcpy(new_book15->author,"Priyam Gandhi Mody");
    new_book15->id=1015;
    ptr->next=new_book15;
    ptr=new_book15;
    
    new_book16=(struct book*)malloc(sizeof(struct book));
    new_book16->next=NULL;
    strcpy(new_book16->name,"A Little Book of India: Celebrating 75 years of Independence");
    strcpy(new_book16->author,"Ruskin Bond");
    new_book16->id=1016;
    ptr->next=new_book16;
    ptr=new_book16;
    
    new_book17=(struct book*)malloc(sizeof(struct book));
    new_book17->next=NULL;
    strcpy(new_book17->name,"Dignity in a Digital Age: Making Tech Work for All of Us");
    strcpy(new_book17->author,"Ro Khanna");
    new_book17->id=1017;
    ptr->next=new_book17;
    ptr=new_book17;
    
    new_book18=(struct book*)malloc(sizeof(struct book));
    new_book18->next=NULL;
    strcpy(new_book18->name,"How to Prevent the Next Pandemic");
    strcpy(new_book18->author,"Bill Gates");
    new_book18->id=1018;
    ptr->next=new_book18;
    ptr=new_book18;
    
    new_book19=(struct book*)malloc(sizeof(struct book));
    new_book19->next=NULL;
    strcpy(new_book19->name,"Golden Boy Neeraj Chopra");
    strcpy(new_book19->author,"Navdeep Singh Gill");
    new_book19->id=1019;
    ptr->next=new_book19;
    ptr=new_book19;
    
    new_book20=(struct book*)malloc(sizeof(struct book));
    new_book20->next=NULL;
    strcpy(new_book20->name,"Atal Bihari Vajpayee");
    strcpy(new_book20->author,"Sagarika Ghose");
    new_book20->id=1020;
    ptr->next=new_book20;
    ptr=new_book20;
    
    new_book21=(struct book*)malloc(sizeof(struct book));
    new_book21->next=NULL;
    strcpy(new_book21->name,"In Search of Lost Time");
    strcpy(new_book21->author,"Marcel Proust");
    new_book21->id=1021;
    ptr->next=new_book21;
    ptr=new_book21;
    
    new_book22=(struct book*)malloc(sizeof(struct book));
    new_book22->next=NULL;
    strcpy(new_book22->name,"Ulysses");
    strcpy(new_book22->author,"James Joyce");
    new_book22->id=1022;
    ptr->next=new_book22;
    ptr=new_book22;
    
    new_book23=(struct book*)malloc(sizeof(struct book));
    new_book23->next=NULL;
    strcpy(new_book23->name,"Don Quixote");
    strcpy(new_book23->author,"Miguel de Cervantes");
    new_book23->id=1023;
    ptr->next=new_book23;
    ptr=new_book23;
    
    new_book24=(struct book*)malloc(sizeof(struct book));
    new_book24->next=NULL;
    strcpy(new_book24->name,"One Hundred Years of Solitude");
    strcpy(new_book24->author,"Gabriel Garcia Marquez");
    new_book24->id=1024;
    ptr->next=new_book24;
    ptr=new_book24;
    
    new_book25=(struct book*)malloc(sizeof(struct book));
    new_book25->next=NULL;
    strcpy(new_book25->name,"The Great Gatsby");
    strcpy(new_book25->author,"F. Scott Fitzgerald");
    new_book25->id=1025;
    ptr->next=new_book25;
    ptr=new_book25;
    
    new_book26=(struct book*)malloc(sizeof(struct book));
    new_book26->next=NULL;
    strcpy(new_book26->name,"Moby Dick");
    strcpy(new_book26->author,"Herman Melville");
    new_book26->id=1026;
    ptr->next=new_book26;
    ptr=new_book26;
    
    new_book27=(struct book*)malloc(sizeof(struct book));
    new_book27->next=NULL;
    strcpy(new_book27->name," War and Peace");
    strcpy(new_book27->author,"Leo Tolstoy");
    new_book27->id=1027;
    ptr->next=new_book27;
    ptr=new_book27;
    
    new_book28=(struct book*)malloc(sizeof(struct book));
    new_book28->next=NULL;
    strcpy(new_book28->name,"Hamlet");
    strcpy(new_book28->author,"William Shakespeare");
    new_book28->id=1028;
    ptr->next=new_book28;
    ptr=new_book28;
    
    new_book29=(struct book*)malloc(sizeof(struct book));
    new_book29->next=NULL;
    strcpy(new_book29->name,"The Odyssey by ");
    strcpy(new_book29->author,"Homer");
    new_book29->id=1029;
    ptr->next=new_book29;
    ptr=new_book29;
    
    new_book30=(struct book*)malloc(sizeof(struct book));
    new_book30->next=NULL;
    strcpy(new_book30->name,"Madame Bovary");
    strcpy(new_book30->author,"Gustave Flaubert");
    new_book30->id=1030;
    ptr->next=new_book30;
    ptr=new_book30;
    
    new_book31=(struct book*)malloc(sizeof(struct book));
    new_book31->next=NULL;
    strcpy(new_book31->name,"The Divine Comedy");
    strcpy(new_book31->author,"Dante Aligheri");
    new_book31->id=1031;
    ptr->next=new_book31;
    ptr=new_book31;
    
    new_book32=(struct book*)malloc(sizeof(struct book));
    new_book32->next=NULL;
    strcpy(new_book32->name,"Lolita");
    strcpy(new_book32->author,"Vladimir Nabokov");
    new_book32->id=1032;
    ptr->next=new_book32;
    ptr=new_book32;
    
    new_book33=(struct book*)malloc(sizeof(struct book));
    new_book33->next=NULL;
    strcpy(new_book33->name,"The brothers karamazov");
    strcpy(new_book33->author,"Fyodor Dostoyevsky");
    new_book33->id=1033;
    ptr->next=new_book33;
    ptr=new_book33;
    
    new_book34=(struct book*)malloc(sizeof(struct book));
    new_book34->next=NULL;
    strcpy(new_book34->name,"Crime and Punishment");
    strcpy(new_book34->author,"Fyodor Dostoyevsky");
    new_book34->id=1034;
    ptr->next=new_book34;
    ptr=new_book34;
    
    new_book35=(struct book*)malloc(sizeof(struct book));
    new_book35->next=NULL;
    strcpy(new_book35->name,"Wuthering Heights");
    strcpy(new_book35->author,"Emily Bronte");
    new_book35->id=1035;
    ptr->next=new_book35;
    ptr=new_book35;
    
    new_book36=(struct book*)malloc(sizeof(struct book));
    new_book36->next=NULL;
    strcpy(new_book36->name,"The catcher in the Rye");
    strcpy(new_book36->author,"J.D. salinger");
    new_book36->id=1036;
    ptr->next=new_book36;
    ptr=new_book36;
    
    new_book37=(struct book*)malloc(sizeof(struct book));
    new_book37->next=NULL;
    strcpy(new_book37->name,"Pride and Prejudice");
    strcpy(new_book37->author,"Jane Austen");
    new_book37->id=1037;
    ptr->next=new_book37;
    ptr=new_book37;
    
    new_book38=(struct book*)malloc(sizeof(struct book));
    new_book38->next=NULL;
    strcpy(new_book38->name,"The Adventures of Huckleberry Finn");
    strcpy(new_book38->author,"Mark Twain");
    new_book38->id=1038;
    ptr->next=new_book38;
    ptr=new_book38;
    
    new_book39=(struct book*)malloc(sizeof(struct book));
    new_book39->next=NULL;
    strcpy(new_book39->name,"Anna Karenina");
    strcpy(new_book39->author,"Leo Tolstoy");
    new_book39->id=1039;
    ptr->next=new_book39;
    ptr=new_book39;
    
    new_book40=(struct book*)malloc(sizeof(struct book));
    new_book40->next=NULL;
    strcpy(new_book40->name,"Atal Bihari Vajpayee");
    strcpy(new_book40->author,"Sagarika Ghose");
    new_book40->id=1040;
    ptr->next=new_book40;
    ptr=new_book40;
    
    new_book41=(struct book*)malloc(sizeof(struct book));
    new_book41->next=NULL;
    strcpy(new_book41->name,"Alice's Adventures in Wonderland");
    strcpy(new_book41->author,"Lewis Carroll");
    new_book41->id=1041;
    ptr->next=new_book41;
    ptr=new_book41;
    
    new_book42=(struct book*)malloc(sizeof(struct book));
    new_book42->next=NULL;
    strcpy(new_book42->name,"The Iliad");
    strcpy(new_book42->author,"Homer");
    new_book42->id=1042;
    ptr->next=new_book42;
    ptr=new_book42;
    
    new_book43=(struct book*)malloc(sizeof(struct book));
    new_book43->next=NULL;
    strcpy(new_book43->name,"To the Lighthouse");
    strcpy(new_book43->author,"Virginia Woolf");
    new_book43->id=1043;
    ptr->next=new_book43;
    ptr=new_book43;
    
    new_book44=(struct book*)malloc(sizeof(struct book));
    new_book44->next=NULL;
    strcpy(new_book44->name,"Catch-22");
    strcpy(new_book44->author,"Joseph Heller");
    new_book44->id=1044;
    ptr->next=new_book44;
    ptr=new_book44;
    
    new_book45=(struct book*)malloc(sizeof(struct book));
    new_book45->next=NULL;
    strcpy(new_book45->name,"Heart of Darkness");
    strcpy(new_book45->author,"Joseph Conrad");
    new_book45->id=1045;
    ptr->next=new_book45;
    ptr=new_book45;
    
    new_book46=(struct book*)malloc(sizeof(struct book));
    new_book46->next=NULL;
    strcpy(new_book46->name,"The Sound and the Fury");
    strcpy(new_book46->author,"William Faulkner");
    new_book46->id=1046;
    ptr->next=new_book46;
    ptr=new_book46;
    
    new_book47=(struct book*)malloc(sizeof(struct book));
    new_book47->next=NULL;
    strcpy(new_book47->name,"Nineteen Eighty Four");
    strcpy(new_book47->author,"George Orwell");
    new_book47->id=1047;
    ptr->next=new_book47;
    ptr=new_book47;
    
    new_book48=(struct book*)malloc(sizeof(struct book));
    new_book48->next=NULL;
    strcpy(new_book48->name,"Great Expectations");
    strcpy(new_book48->author,"Charles Dickens");
    new_book48->id=1048;
    ptr->next=new_book48;
    ptr=new_book48;
    
    new_book49=(struct book*)malloc(sizeof(struct book));
    new_book49->next=NULL;
    strcpy(new_book49->name,"The Grapes of Wrath");
    strcpy(new_book49->author,"John Steinbeck");
    new_book49->id=1049;
    ptr->next=new_book49;
    ptr=new_book49;
    
    new_book50=(struct book*)malloc(sizeof(struct book));
    new_book50->next=NULL;
    strcpy(new_book50->name,"Absalom, Absalom!");
    strcpy(new_book50->author,"William Faulkner");
    new_book50->id=1050;
    ptr->next=new_book50;
    ptr=new_book50;
    
    new_book51=(struct book*)malloc(sizeof(struct book));
    new_book51->next=NULL;
    strcpy(new_book51->name,"Invisible Man");
    strcpy(new_book51->author,"Ralph Ellison");
    new_book51->id=1051;
    ptr->next=new_book51;
    ptr=new_book51;
    
    new_book52=(struct book*)malloc(sizeof(struct book));
    new_book52->next=NULL;
    strcpy(new_book52->name,"To Kill a Mockingbird");
    strcpy(new_book52->author,"Harper Lee");
    new_book52->id=1052;
    ptr->next=new_book52;
    ptr=new_book52;
    
    new_book53=(struct book*)malloc(sizeof(struct book));
    new_book53->next=NULL;
    strcpy(new_book53->name,"The Trial");
    strcpy(new_book53->author,"Franz Kafka");
    new_book53->id=1053;
    ptr->next=new_book53;
    ptr=new_book53;
    
    new_book54=(struct book*)malloc(sizeof(struct book));
    new_book54->next=NULL;
    strcpy(new_book54->name,"The Red and the Black");
    strcpy(new_book54->author,"Stendhal");
    new_book54->id=1054;
    ptr->next=new_book54;
    ptr=new_book54;
    
    new_book55=(struct book*)malloc(sizeof(struct book));
    new_book55->next=NULL;
    strcpy(new_book55->name,"Middlemarch");
    strcpy(new_book55->author,"George Eliot");
    new_book55->id=1055;
    ptr->next=new_book55;
    ptr=new_book55;
    
    new_book56=(struct book*)malloc(sizeof(struct book));
    new_book56->next=NULL;
    strcpy(new_book56->name,"Gulliver's Travels");
    strcpy(new_book56->author,"Jonathan Swift");
    new_book56->id=1056;
    ptr->next=new_book56;
    ptr=new_book56;
    
    new_book57=(struct book*)malloc(sizeof(struct book));
    new_book57->next=NULL;
    strcpy(new_book57->name,"Beloved");
    strcpy(new_book57->author,"Toni Morrison");
    new_book57->id=1057;
    ptr->next=new_book57;
    ptr=new_book57;
    
    new_book58=(struct book*)malloc(sizeof(struct book));
    new_book58->next=NULL;
    strcpy(new_book58->name,"Mrs. Dalloway");
    strcpy(new_book58->author,"Virginia Woolf");
    new_book58->id=1058;
    ptr->next=new_book58;
    ptr=new_book58;
    
    new_book59=(struct book*)malloc(sizeof(struct book));
    new_book59->next=NULL;
    strcpy(new_book59->name,"The Stories of Anton Chekhov");
    strcpy(new_book59->author,"Anton Chekhov");
    new_book59->id=1059;
    ptr->next=new_book59;
    ptr=new_book59;
    
    new_book60=(struct book*)malloc(sizeof(struct book));
    new_book60->next=NULL;
    strcpy(new_book60->name,"The Stranger");
    strcpy(new_book60->author,"Albert Camus");
    new_book60->id=1060;
    ptr->next=new_book60;
    ptr=new_book60;
    
    new_book61=(struct book*)malloc(sizeof(struct book));
    new_book61->next=NULL;
    strcpy(new_book61->name,"Jane Eyre");
    strcpy(new_book61->author,"Charlotte Bronte");
    new_book61->id=1061;
    ptr->next=new_book61;
    ptr=new_book61;
    
    new_book62=(struct book*)malloc(sizeof(struct book));
    new_book62->next=NULL;
    strcpy(new_book62->name,"The Aeneid");
    strcpy(new_book62->author,"Virgil");
    new_book62->id=1062;
    ptr->next=new_book62;
    ptr=new_book62;
    
    new_book63=(struct book*)malloc(sizeof(struct book));
    new_book63->next=NULL;
    strcpy(new_book63->name,"Collected Fiction");
    strcpy(new_book63->author,"Jorge luis Borges");
    new_book63->id=1063;
    ptr->next=new_book63;
    ptr=new_book63;
    
    new_book64=(struct book*)malloc(sizeof(struct book));
    new_book64->next=NULL;
    strcpy(new_book64->name,"The Sun Also Rises");
    strcpy(new_book64->author,"Ernest Hemingway");
    new_book64->id=1064;
    ptr->next=new_book64;
    ptr=new_book64;
    
    new_book65=(struct book*)malloc(sizeof(struct book));
    new_book65->next=NULL;
    strcpy(new_book65->name,"David Copperfield");
    strcpy(new_book65->author,"Charles Dickens");
    new_book65->id=1065;
    ptr->next=new_book65;
    ptr=new_book65;
    
    new_book66=(struct book*)malloc(sizeof(struct book));
    new_book66->next=NULL;
    strcpy(new_book66->name,"Tristram Shandy");
    strcpy(new_book66->author,"Laurence Sterne");
    new_book66->id=1066;
    ptr->next=new_book66;
    ptr=new_book66;
    
    new_book67=(struct book*)malloc(sizeof(struct book));
    new_book67->next=NULL;
    strcpy(new_book67->name,"Leaves Of Grass");
    strcpy(new_book67->author,"Walt Whitman");
    new_book67->id=1067;
    ptr->next=new_book67;
    ptr=new_book67;
    
    new_book68=(struct book*)malloc(sizeof(struct book));
    new_book68->next=NULL;
    strcpy(new_book68->name,"The Magic Mountain");
    strcpy(new_book68->author,"Thomas Mann");
    new_book68->id=1068;
    ptr->next=new_book68;
    ptr=new_book68;
    
    new_book69=(struct book*)malloc(sizeof(struct book));
    new_book69->next=NULL;
    strcpy(new_book69->name,"A Portrait of The Artist as a Young Man");
    strcpy(new_book69->author,"James Joyce");
    new_book69->id=1069;
    ptr->next=new_book69;
    ptr=new_book69;
    
    new_book70=(struct book*)malloc(sizeof(struct book));
    new_book70->next=NULL;
    strcpy(new_book70->name,"Midnight's Children");
    strcpy(new_book70->author,"Salman Rushdie");
    new_book70->id=1070;
    ptr->next=new_book70;
    ptr=new_book70;
    
    new_book71=(struct book*)malloc(sizeof(struct book));
    new_book71->next=NULL;
    strcpy(new_book71->name,"Oedipus the King");
    strcpy(new_book71->author,"Sophocles");
    new_book71->id=1071;
    ptr->next=new_book71;
    ptr=new_book71;
    
    new_book72=(struct book*)malloc(sizeof(struct book));
    new_book72->next=NULL;
    strcpy(new_book72->name,"Candide");
    strcpy(new_book72->author,"Voltaire");
    new_book72->id=1072;
    ptr->next=new_book72;
    ptr=new_book72;
    
    new_book73=(struct book*)malloc(sizeof(struct book));
    new_book73->next=NULL;
    strcpy(new_book73->name,"The Lord of The Rings");
    strcpy(new_book73->author,"J.R.R. Tolkien");
    new_book73->id=1073;
    ptr->next=new_book73;
    ptr=new_book73;
    
    new_book74=(struct book*)malloc(sizeof(struct book));
    new_book74->next=NULL;
    strcpy(new_book74->name,"The Idiot");
    strcpy(new_book74->author,"Fyodor Dostoyevsky");
    new_book74->id=1074;
    ptr->next=new_book74;
    ptr=new_book74;
    
    new_book75=(struct book*)malloc(sizeof(struct book));
    new_book75->next=NULL;
    strcpy(new_book75->name,"A Passage to India");
    strcpy(new_book75->author,"E.M. Forster");
    new_book75->id=1075;
    ptr->next=new_book75;
    ptr=new_book75;


    return start_lib;
}

struct student *book_issue(struct student *start){
    struct book *ptr;
    struct student *ptr2,*new_student;
    int i=1,id,flag=0;
    if(start_lib==NULL){
        printf("\n\t\t\t\t No books left in the library to issue!\n\t\t\t\t Sorry for the inconvenience!\n");
    }else{
        system("cls");
        ptr=start_lib;
        printf("\n\t*************** Books Available: ****************\n");
        while(ptr!=NULL){
            printf("\n\t______________________________________________________________________\n");
            printf("\n\t Book %d",i);
            printf("\n\t Book Title: %s",ptr->name);
            printf("\n\t Name of Author: %s",ptr->author);
            printf("\n\t Book ID: %d",ptr->id);
            printf("\n\t______________________________________________________________________\n");
            ptr=ptr->next;
            i++;
        }
        printf("\n\n\t Enter the Book ID:- ");
        scanf("%d",&id);
        ptr=start_lib;
        while(ptr!=NULL){
            if(ptr->id==id){
                flag=1;
                break;
            }
            ptr=ptr->next;
        }
        if(flag==1){
            ptr=start_lib;
            while(ptr->id!=id){
                ptr=ptr->next;
            }
            new_student=(struct student *)malloc(sizeof(struct student));
            printf("\n\t Enter Student Details:\n ");
            printf("\n\t Enter your Name:- ");
            scanf("%s",new_student->name);
            printf("\n\t Enter your Email:- ");
            scanf("%s",new_student->email);
            strcpy(new_student->book,ptr->name);
            strcpy(new_student->a,ptr->author);
            new_student->id=ptr->id;
            new_student->next=NULL;
            printf("\n\t Issue of Book ID %d done successfully!\n",new_student->id);
            printf("\n\n\t*************************************************\n");
            if(start==NULL){
                start=new_student;
            }else{
                ptr2=start;
                while(ptr2->next!=NULL){
                    ptr2=ptr2->next;
                }
                ptr2->next=new_student;
            }
            start_lib=delete_book(new_student->id);
            printf("\n\n\t Press any key to go to the main menu: ");
            getch();
            system("cls");
        }else{
            printf("\n\t\t      ...Invalid Option!...\n");
            printf("\n\t\t      Press any key to try again: ");
            getch();
            system("cls");
        }
    }
    return start;
}

struct student *book_return(struct student *start){
    struct student *ptr,*preptr;
    char bookname[30],authorname[30];
    int flag=0,id,identity,c=0,d=1;
    printf("\n\n\t*************** Books Submission: ****************\n");
    printf("\n\n\t Enter your Book ID:- ");
    scanf("%d",&identity);
    ptr=start;
    while(ptr!=NULL){
        if(ptr->id==identity){
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag==1){
        ptr=start;
        while(ptr!=NULL){
            c++;
            ptr=ptr->next;
        }
        ptr=start;
        while(ptr->id!=identity){
                d++;
            ptr=ptr->next;
        }
        ptr=start;
        if( d==1 ){
            printf("\n\t_________________________________________________\n");
            printf("\n\t Student Name:- %s",start->name);
            printf("\n\t Student Email:- %s",start->email);
            printf("\n\t Name of Book Issued:- %s",start->book);
            printf("\n\t_________________________________________________\n");
            printf("\n\n\t Return of Book ID %d done successfully!\n",identity);
            printf("\n\n\t*************************************************\n");
            strcpy(bookname,start->book);
            strcpy(authorname,start->a);
            id=start->id;
            start=start->next;
            free(ptr);
            add_book(bookname,authorname,id);
        }else{
            ptr=start;
            while(ptr->id!=identity){
                preptr=ptr;
                ptr=ptr->next;
            }
            printf("\n\t_________________________________________________\n");
            printf("\n\t Student Name:- %s",ptr->name);
            printf("\n\t Student Email- %s",ptr->email);
            printf("\n\t Name of Book Issued:- %s",ptr->book);
            printf("\n\t Book ID:- %d",ptr->id);
            printf("\n\t_________________________________________________\n");
            strcpy(bookname,ptr->book);
            strcpy(authorname,ptr->a);
            id=ptr->id;
            preptr->next=ptr->next;
            free(ptr);
            add_book(bookname,authorname,id);
        }
        printf("\n\t Thank you! \n\t Do visit again! ");
        printf("\n\n\t Press any key to go to the main menu: ");
        getch();
        system("cls");
    }else{
        printf("\n\tSorry the book doesn't exist! Please recheck the entered ID");
        printf("\n\t\t\t\t      Press any key to try again: ");
        getch();
        system("cls");
    }
    return start;
}

void display(struct student *start){
    struct student *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("\n\t************* Details of Students: **************\n");
        printf("\n\t_________________________________________________\n");
        printf("\n\t\t Student Name:- %s",ptr->name);
        printf("\n\t\t Student Email:- %s",ptr->email);
        printf("\n\t\t Name of Book Issued:- %s",ptr->book);
        printf("\n\t\t Book ID:- %d",ptr->id);
        printf("\n\t_________________________________________________\n");
        printf("\n\n\t*************************************************\n");
        ptr=ptr->next;
    }
    printf("\n\n\t Press any key to go to the main menu: ");
    getch();
    system("cls");
}

struct book *delete_book(int id){
    struct book *ptr,*preptr;
    int c=0;
    ptr=start_lib;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    if(c==1){
        ptr=start_lib;
        start_lib=NULL;
        free(ptr);
    }else if(start_lib->id==id){
        ptr=start_lib;
        start_lib=start_lib->next;
        free(ptr);
    }else{
        ptr=start_lib;
        while(ptr->id!=id){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
    }
    return start_lib;
}

struct book *add_book(char bookname[30],char authorname[30],int id){
    struct book *ptr,*new_book;
    new_book=(struct book *)malloc(sizeof(struct book));
    strcpy(new_book->name,bookname);
    strcpy(new_book->author,authorname);
    new_book->id=id;
    new_book->next=NULL;
    if(start_lib==NULL){
        start_lib=new_book;
    }else{
        ptr=start_lib;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_book;
    }
    return start_lib;
}

