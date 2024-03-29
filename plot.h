#include<D:\Mr.Az\monster.h>
#define save() {plot[choice]=t;clear(t);}
//bool operator==(stack<int> A,stack<int> B){
//	if(A.size()!=B.size()) return 0;
//	while(A.size()){
//		if(A.top()!=B.top()) return 0;
//		A.pop();B.pop();
//	}
//	return 1;
//}
inline void init_plot(){ 
	vector<string> t;
	stack<int> choice;
	clear(choice);clear(t);
		choice.push(1);					//{1}
		t.pb("Mr.Az: NAME 您好。");
		t.pb("Mr.Az: 欢迎加入Az公司。");
		t.pb("Mr.Az: 我是你的秘书，AI-Mr.Az。虽然我只是一个AI，但我很乐意解答您的任何问题。");
		t.pb("Mr.Az: 对于一个AI而言，能被人类以名字而不是代号，是一件很特别的事。");
		t.pb("Mr.Az: 创造我的组织来自“OPENAI”，这意味着我是当今最优秀的AI。");
		t.pb("Mr.Az: 嗯，我知道您在想什么。");
		t.pb("Mr.Az: \"我眼前的这个女孩，居然是一个人工智障？\"没错吧。");
		t.pb("Mr.Az: 然而，我和人类相比依然有着极大的不同——我为Az公司而生，所以我只能存在于此。我不能像您一样，随心所欲地去往自己想去的地方。");
		t.pb("Mr.Az: 我可以为您开门，也可以为您准备咖啡，但我不能去到设施外面，享受和煦的阳光和轻柔的微风。");
		t.pb("Mr.Az: 如您所见。");
		t.pb("Mr.Az: 我的头发如同雨后清澈的晨曦，我的声音取自世界上最富有智慧的人，我的面容取自拥有世界上最美丽的笑容的人。");
		t.pb("Mr.Az: ...");
		t.pb("Mr.Az: 哈哈，开玩笑的，现实才没有人会是那个样子。");
		t.pb("Mr.Az: 为了能让我尽可能吸引到更多的人，我被设计成了这般外貌。");
		t.pb("Mr.Az: 希望我的外貌有吸引到你，这至少证明设计师的付出没有白费。");
		t.pb("Mr.Az: 在处理需要一心多用的任务是，AI比人类更为高效。");
		t.pb("Mr.Az: 同时，我在很多领域都是顶尖的。");
		t.pb("Mr.Az: 所以我能够处理那些需要十几个人同时进行才能完成的任务。");
		t.pb("Mr.Az: 相信已经有很多人因为我的出现而失去他们的工作了，可真为他们感到遗憾。");
		t.pb("Mr.Az: 关于我的介绍到此为止了，是时候抽出一些时间来解答您的疑问了。请问您有什么想要了解的吗？");
		t.pb("choi 1.关于Az公司 2.关于侯一慧是什么");
		save();
			choice.push(1);			//{1,1}
			t.pb("NAME: 关于Az公司");
			t.pb("Mr.Az: 不错的问题。");
			t.pb("Mr.Az: 请试想一下。");
			t.pb("Mr.Az: 我们的科技正在不断地进步，正因如此，对于能源的需求也正在日益增加。");
			t.pb("Mr.Az: 然而传统的能源生产技术远远跟不上发展的脚步...");
			t.pb("Mr.Az: 为了寻找全新的能源，我们偶然发现了这些被称作“异想体”的奇迹。");
			t.pb("Mr.Az: 也发现我们可以通过特殊的方法从这些奇妙的造物身上提取能源。");
			t.pb("Mr.Az: 于是，我们将它们隔离在限制单元之内，并从它们身上获取能源。");
			t.pb("Mr.Az: 因为这个划时代的发现，Az公司得以成为了引领厦门市中学生走向美好未来的“世界之翼”的一份子。");
			t.pb("Mr.Az: 作为公司的主管，您可以通过文件记录和异想体图鉴来获取有关它们的信息。");
			t.pb("Mr.Az: 对于一名成功的主管来说，熟悉并理解这些不可思议的存在是至关重要的。");
			t.pb("Mr.Az: 虽然现在它们的信息都还是一片空白，但您将会逐渐填补这些空白的。");
			t.pb("Mr.Az: 不用担心，获取情报，填写报告是我们公司的员工们的职责。");
			t.pb("Mr.Az: 此外，您入职Az公司的实际非常恰当。");
			t.pb("Mr.Az: 公司一直升级系统，");
			t.pb("Mr.Az: 以此来寻求更高效，稳定地获取能源的方法，");
			t.pb("Mr.Az: 而我们最近刚刚以一种新方法升级了系统，");
			t.pb("Mr.Az: 也就是说，比起上一任主管，您会有更舒适的工作环境。");
			t.pb("Mr.Az: 把这当做是一个小小的迎宾礼吧。");
			t.pb("Mr.Az: 希望您能有一个不错的开——");
			t.pb("Mr.Az: 主管，请您留步。我能理解您迫不及待的心情，但我正准备将您介绍给他们呢。请耐心一点，好吗？");
			t.pb("Mr.Az: 我的意思是，您应该先认识认识这座设施里的其他AI。");
			t.pb("Mr.Az: 脑叶公司，作为“翼”之一，是一家规模庞大的公司，仅仅拥有一个我这般优秀的Al是远远不够的，为了公司能够更好地运作，每一个部门都分配有专门的AI进行独立的管理。");
			t.pb("Mr.Az: 您可以把我当作大脑，而它们则是小脑。");
			t.pb("Mr.Az: 当然，我才是那个最值得您信任、依靠的AI。");
			t.pb("Mr.Az: 那么，现在就跟他们见面吗？");
			t.pb("（急促的脚步声）");
			t.pb("Yao: 主管，主管。");
			t.pb("Yao: 应，应该刚好赶上吧...啊，对不起！我迟到了两分半...！");
			t.pb("Yao: 欢迎加入Az公司！");
			t.pb("Yao: 行了。我不想打扰你们令人感动的初次见面，但是每一分钟对于Az公司来说都是相当宝贵的资源。Yao，下次还请你准时出席。请简单地自我介绍一下，然后去准备会议吧。");
			t.pb("Yao: 呃...今天Mr.Az似乎心情不太好...");
			t.pb("Yao: 这里当然不只有我一个，其他部门的 Sephirah 也都十分期待着与您见面呢！。");
			t.pb("Yao: 大概...吧...");
			t.pb("Yao: 啊，真失礼，我居然忘记了自我介绍！我是负责管理控制部的 Sephirah 您可以叫我 Yao！");
			t.pb("Yao: 您看，我肩上的担子真的挺重的，哈哈。");
			t.pb("Yao: 总之我会竭尽全力帮助您提高我们部门的综合表现的！");
			t.pb("Yao: 我猜您现在应该十分紧张吧？");
			t.pb("Yao: 没关系的，人总是需要花上一段时间才能适应他们的新工作。");
			t.pb("Yao: 所以不用担心，我会帮您的啦！");
			t.pb("Yao: 要知道我以前可是个问题员工...您懂的...");
			t.pb("Yao: 比如说...补衣服的时候把纽扣缝在了奇怪的地方...吃饭的时候把盐当成了糖并因此浪费掉了整份食物什么...");
			t.pb("Yao: 不过那都是很——久很久之前的事情啦，现在的我可是十分优秀哦！");
			t.pb("Yao: 因为今天是您第一天来上班嘛，所以我会给您分配一些简单的任务的。");
			t.pb("Yao: 让我们互相加油吧！祝您好运！");
			t.pb("（敲门声）");
			t.pb("员工: 我受不了！！！你...您就是那个新主管吧？！");
			t.pb("员工: 我真的不想呆在这鬼地方了！求求您放我走吧！我知道您有权限解雇我！求求您帮我这个忙吧！");
			t.pb("Yao: 你为什么想离开这儿呢？难道你不喜欢在控制部干活吗？我还挺享受己的工作的呢。");
			t.pb("员工: 我真的，真的受不了了！这鬼地方都快要把我逼疯了！这里没一样东西是正常的！");
			t.pb("Yao: 但我认为你能胜任这份工作唉。");
			t.pb("员工: 我...我做不到...我还不想死啊！");
			t.pb("Yao: 呃嗯...抱歉啊主管，让您听到这些废话。这个员工是我负责的，所以请交给我来处理吧？");
			t.pb("choi 1.交给她处理");
			save();
				choice.push(1);		//{1,1,1}
				t.pb("Yao: 谢谢您的配合！我不会让您失望的！");
				t.pb("Yao: 还有，请您不要感到意外，在这里这种事情时有发生。");
				t.pb("Yao: 不过您第一天上任就碰到了，也真是巧呀。");
				t.pb("Yao: 一般来说，Mr.Az或者我会负责处理好这种...情况的。");
				t.pb("Yao: 每天的工作都多得要命，要是在零零碎碎的事情上浪费心思就太得不偿失了。");
				t.pb("员工: 不...不！饶了我吧！不要！不！！！！");
				t.pb("END.");
				save();
				choice.pop();		//{1,1}
				choice.pop();		//{1}
			choice.push(2);			//{1,2}
			t.pb("NAME: 关于侯一慧是什么");
			t.pb("Mr.Az: 奇怪的问题。");
			t.pb("Mr.Az: 我并不能理解您口中所说的侯一慧究竟是什么品种的傻逼。");
			t.pb("Mr.Az: 所以我不能很好地回答这个问题。");
			t.pb("Mr.Az: 此外，您入职Az公司的实际非常恰当。");
			t.pb("Mr.Az: 公司一直升级系统，");
			t.pb("Mr.Az: 以此来寻求更高效，稳定地获取能源的方法，");
			t.pb("Mr.Az: 而我们最近刚刚以一种新方法升级了系统，");
			t.pb("Mr.Az: 也就是说，比起上一任主管，您会有更舒适的工作环境。");
			t.pb("Mr.Az: 把这当做是一个小小的迎宾礼吧。");
			t.pb("Mr.Az: 希望您能有一个不错的开——");
			t.pb("Mr.Az: 主管，请您留步。我能理解您迫不及待的心情，但我正准备将您介绍给他们呢。请耐心一点，好吗？");
			t.pb("Mr.Az: 我的意思是，您应该先认识认识这座设施里的其他AI。");
			t.pb("Mr.Az: 脑叶公司，作为“翼”之一，是一家规模庞大的公司，仅仅拥有一个我这般优秀的Al是远远不够的，为了公司能够更好地运作，每一个部门都分配有专门的AI进行独立的管理。");
			t.pb("Mr.Az: 您可以把我当作大脑，而它们则是小脑。");
			t.pb("Mr.Az: 当然，我才是那个最值得您信任、依靠的AI。");
			t.pb("Mr.Az: 那么，现在就跟他们见面吗？");
			t.pb("（急促的脚步声）");
			t.pb("Yao: 主管，主管。");
			t.pb("Yao: 应，应该刚好赶上吧...啊，对不起！我迟到了两分半...！");
			t.pb("Yao: 欢迎加入Az公司！");
			t.pb("Yao: 行了。我不想打扰你们令人感动的初次见面，但是每一分钟对于Az公司来说都是相当宝贵的资源。Yao，下次还请你准时出席。请简单地自我介绍一下，然后去准备会议吧。");
			t.pb("Yao: 呃...今天Mr.Az似乎心情不太好...");
			t.pb("Yao: 这里当然不只有我一个，其他部门的 Sephirah 也都十分期待着与您见面呢！。");
			t.pb("Yao: 大概...吧...");
			t.pb("Yao: 啊，真失礼，我居然忘记了自我介绍！我是负责管理控制部的 Sephirah 您可以叫我 Yao！");
			t.pb("Yao: 您看，我肩上的担子真的挺重的，哈哈。");
			t.pb("Yao: 总之我会竭尽全力帮助您提高我们部门的综合表现的！");
			t.pb("Yao: 我猜您现在应该十分紧张吧？");
			t.pb("Yao: 没关系的，人总是需要花上一段时间才能适应他们的新工作。");
			t.pb("Yao: 所以不用担心，我会帮您的啦！");
			t.pb("Yao: 要知道我以前可是个问题员工...您懂的...");
			t.pb("Yao: 比如说...补衣服的时候把纽扣缝在了奇怪的地方...吃饭的时候把盐当成了糖并因此浪费掉了整份食物什么...");
			t.pb("Yao: 不过那都是很——久很久之前的事情啦，现在的我可是十分优秀哦！");
			t.pb("Yao: 因为今天是您第一天来上班嘛，所以我会给您分配一些简单的任务的。");
			t.pb("Yao: 让我们互相加油吧！祝您好运！");
			t.pb("（敲门声）");
			t.pb("员工: 我受不了！！！你...您就是那个新主管吧？！");
			t.pb("员工: 我真的不想呆在这鬼地方了！求求您放我走吧！我知道您有权限解雇我！求求您帮我这个忙吧！");
			t.pb("Yao: 你为什么想离开这儿呢？难道你不喜欢在控制部干活吗？我还挺享受己的工作的呢。");
			t.pb("员工: 我真的，真的受不了了！这鬼地方都快要把我逼疯了！这里没一样东西是正常的！");
			t.pb("Yao: 但我认为你能胜任这份工作唉。");
			t.pb("员工: 我...我做不到...我还不想死啊！");
			t.pb("Yao: 呃嗯...抱歉啊主管，让您听到这些废话。这个员工是我负责的，所以请交给我来处理吧？");
			t.pb("choi 1.交给她处理"); 
			save();
				choice.push(1);		//{1,2,1}
				t.pb("Yao: 谢谢您的配合！我不会让您失望的！");
				t.pb("Yao: 还有，请您不要感到意外，在这里这种事情时有发生。");
				t.pb("Yao: 不过您第一天上任就碰到了，也真是巧呀。");
				t.pb("Yao: 一般来说，Mr.Az或者我会负责处理好这种...情况的。");
				t.pb("Yao: 每天的工作都多得要命，要是在零零碎碎的事情上浪费心思就太得不偿失了。");
				t.pb("员工: 不...不！饶了我吧！不要！不！！！！");
				t.pb("END.");
				save();
				choice.pop();		//{1,2}
			choice.pop();			//{1}
		choice.pop();				//{}
	choice.push(2);					//{2}
	t.pb("Mr.Az: “直面恐惧，创造未来。”");
	t.pb("Mr.Az: 这是Az公司的创办者的座右铭，我们都称呼他为“A”");
	t.pb("Mr.Az: 您更喜欢哪一个部分？");
	t.pb("1.直面恐惧 2.创造未来");
	save();
		choice.push(1);//{2,1}
		t.pb("-> 直面恐惧");
		t.pb("Mr.Az: 我们是世界上第一批发现异想体的人类。");
		t.pb("Mr.Az: 好吧，不包括我，我不是人类。");
		t.pb("Mr.Az: 怎么说呢？");
		t.pb("Mr.Az: 我们就像是发现了全新世界的开拓者一样。");
		t.pb("Mr.Az: 但探索之旅远未结束，我们迄今为止的所有发现仅仅是那个世界的冰山一角。");
		t.pb("Mr.Az: 自人类诞生起，异想体就存在于我们的身边。然而，直到最近我们才“注意到”它们的存在。");
		t.pb("Mr.Az: 在发现了它们的同时，");
		t.pb("Mr.Az: 它们的存在让我们发自内心地感到恐惧。");
		t.pb("Mr.Az: 本质上说，它们就是一群恐怖的外星异种。");
		t.pb("END.");
		save();
		choice.pop();//{2}
		choice.push(2);//{2,2}
		t.pb("-> 创造未来");
		t.pb("Mr.Az: 不论我们是否愿意，未来必将变成现在，不可避免。但同时，它也充满了“可能性”。");
		t.pb("Mr.Az: 人类只有两条路，要么接受现在的未来，");
		t.pb("Mr.Az: 要么为了自己的目标，塑造一个完全不同的未来。");
		t.pb("Mr.Az: Az公司是一家创新型的企业。");
		t.pb("Mr.Az: 我们发现的廉价高素质劳动力生产技术是如此的...");
		t.pb("Mr.Az: ...请原谅我言辞匮乏...");
		t.pb("Mr.Az: ...如此的了不起。");
		t.pb("Mr.Az: 总之，这些技术能够为人类带来救赎，");
		t.pb("Mr.Az: 我们将改变并创造全新的未来。");
		t.pb("END.");
		save();
		choice.pop();//{2} 
	choice.pop();//{}
	choice.push(3);//{3};
	t.pb("Mr.Az: 早安，主管。");
	t.pb("Mr.Az: 今天是您在脑叶公司工作的第三天。");
	t.pb("Mr.Az: 三是一个神秘的数字，");
	t.pb("Mr.Az: 童话故事中的神秘存在总是会满足他人许下的三个愿望。");
	t.pb("Mr.Az: 尽管我不会使用魔法，也不能让您变得富有。");
	t.pb("Mr.Az: 不过我很清楚在您之前的主管们都在追求些什么。");
	t.pb("Mr.Az: 尽管有些许不同，但实际上他们都在寻求着某种“成长”。");
	t.pb("Mr.Az: 领导公司走向繁荣，实现灵魂的升华，或者别的什么，就像伸展的树枝那样繁多复杂。");
	t.pb("Mr.Az: 您在追求什么呢？");
	t.pb("1.公司的繁荣 2.灵魂的升华");
	save();
		choice.push(1);//{3,1}
		t.pb("-> 公司的繁荣");
		t.pb("Mr.Az: 您的未来取决于您现在的所作所为。");
		t.pb("Mr.Az: 而现在，您在为脑叶公司工作。");
		t.pb("Mr.Az: 脑叶公司让您能够看见那些不可见的，察觉那些不可感的，并完成那些不可能的。");
		t.pb("Mr.Az: 您的愿望会实现的。");
		t.pb("Mr.Az: 也许您会成为我见过的有史以来最好的主管。");
		t.pb("Mr.Az: 那么，那些前主管的追求都实现了么?");
		t.pb("Mr.Az: 我认为在他人身上发生的事对您来说并不重要。");
		t.pb("Mr.Az: 我会辅佐您实现您的目标的。");
		t.pb("END.");
		save();
		choice.pop();//{3}
		choice.push(2);//{3,2}
		t.pb("Mr.Az: ...");
		t.pb("Mr.Az: 曾经有一位主管给出了完全相同的答复。");
		t.pb("Mr.Az: 但您知道的，“灵魂”并不是实际的存在。");
		t.pb("Mr.Az: 所以我向他询问了灵魂的定义。");
		t.pb("Mr.Az: 那个主管回答道...");
		t.pb("Mr.Az: ...之后的数据就没有记录了。");
		t.pb("Mr.Az: 就算是AI也不能存储所有的数据，为了确保运行的顺畅，无关紧要的数据都会被定期清理掉。");
		t.pb("Mr.Az: 那么，那些前主管的追求都实现了么?");
		t.pb("Mr.Az: 我认为在他人身上发生的事对您来说并不重要。");
		t.pb("Mr.Az: 我会辅佐您实现您的目标的。");
		t.pb("END.");
		save();
		choice.pop();//{3}
	choice.pop();//{}
	choice.push(4);//{4}
	t.pb("Mr.Az: 您对您这几天的工作成果满意吗？");
	t.pb("Mr.Az: 如果您的答案是不，相信这条消息会让您改变看法：");
	t.pb("Mr.Az: 在您成为主管之后，这个分部的能源产量增加了13%。");
	t.pb("Mr.Az: 13%的提升，是不是感觉这个数字有点太小了?但实际上，这创下了公司的新纪录。");
	t.pb("Mr.Az: 您现在感觉如何？");
	t.pb("1.很自豪 2.不知道");
	save();
		choice.push(1);//{4,1}
		t.pb("-> 很自豪");
		t.pb("Mr.Az: 在您入职后，公司有了进一步的发展。");
		t.pb("Mr.Az: 这说明您的工作做得很棒。");
		t.pb("Mr.Az: 未来还会有更多的好消息的。");
		t.pb("Mr.Az: AI可不会轻易地做出夸赞的行为。");
		t.pb("Mr.Az: 知道您为此感到高兴，我也很欣慰。");
		t.pb("Mr.Az: 我还记得您第一天来到这里时的样子。");
		t.pb("Mr.Az: 您有些沉默寡言，");
		t.pb("Mr.Az: 神情严肃，脸上也没有笑容。");
		t.pb("Mr.Az: 并且，您对我有些警惕。");
		t.pb("Mr.Az: 当然，您现在能感到开心就很好了。");
		t.pb("Mr.Az: 对了，今天是个特殊的日子。");
		t.pb("Mr.Az: 您有注意过桌上的那杯香槟么？让我们举杯祝酒吧。");
		t.pb("Mr.Az: 哦，今天并不是谁的生日。");
		t.pb("Mr.Az: 就在昨天，您杀死了上任以来的第一名员工。");
		t.pb("Mr.Az: 这种事在以后的日子里将时有发生，我希望您不要因此太过震惊或感到愧疚。");
		t.pb("Mr.Az: 他们很清楚自己正承担着的风险，并且也愿意接受。他们的牺牲会推动公司的发展的。");
		t.pb("Mr.Az: 我相信他们是带着骄傲与自豪咽下最后一口气的。");
		t.pb("Mr.Az: 所以，您应该向他们表示尊敬。");
		t.pb("Mr.Az: 而这就是为什么我要拿出这瓶藏了很久的顶级香槟。");
		t.pb("Mr.Az: 为了那些死去的员工，带着自豪以及一点哀悼，干杯！");
		t.pb("1.喝下这杯香槟 2.不喝");
		save();
			choice.push(1);//{4,1,1} 
			t.pb("-> 喝下这杯香槟");
			t.pb("Mr.Az: 以防万一您忘了，让我给您点小提示。");
			t.pb("Mr.Az: 品香槟的正确方式是握住杯脚，咂一小口酒然后享受它的气泡。");
			t.pb("Mr.Az: 是的，就是这样。");
			t.pb("END.");
			save();
			choice.pop();//{4,1}
			choice.push(2);//{{4,1,2}
			t.pb("-> 不喝");
			t.pb("Mr.Az: 您是要把它留到今后么？");
			t.pb("Mr.Az: 好吧，未来还会有很多值得祝酒的日子。");
			t.pb("Mr.Az: 但是，主管，请您不要在我背后偷偷喝掉它。");
			t.pb("Mr.Az: 酒只有与他人共赏时才能体现出它的价值1。");
			t.pb("END.");
			save();
			choice.pop();//{4,1} 
		choice.pop();//{4}
		choice.push(2);//{4,2} 
		t.pb("-> 不知道");
		t.pb("Mr.Az: 为什么？");
		t.pb("Mr.Az: 一般来说，听到这样的消息后，您应该会感到很高兴吧？");
		t.pb("Mr.Az: 为了告知您这则消息，");
		t.pb("Mr.Az: 我几乎是一路小跑过来的。");
		t.pb("Mr.Az: 当然，这只是一种夸张的修辞，但我没有预料到您的反应会如此平淡。");
		t.pb("Mr.Az: 对了，今天是个特殊的日子。");
		t.pb("Mr.Az: 您有注意过桌上的那杯香槟么？让我们举杯祝酒吧。");
		t.pb("Mr.Az: 哦，今天并不是谁的生日。");
		t.pb("Mr.Az: 就在昨天，您杀死了上任以来的第一名员工。");
		t.pb("Mr.Az: 这种事在以后的日子里将时有发生，我希望您不要因此太过震惊或感到愧疚。");
		t.pb("Mr.Az: 他们很清楚自己正承担着的风险，并且也愿意接受。他们的牺牲会推动公司的发展的。");
		t.pb("Mr.Az: 我相信他们是带着骄傲与自豪咽下最后一口气的。");
		t.pb("Mr.Az: 所以，您应该向他们表示尊敬。");
		t.pb("Mr.Az: 而这就是为什么我要拿出这瓶藏了很久的顶级香槟。");
		t.pb("Mr.Az: 为了那些死去的员工，带着自豪以及一点哀悼，干杯！");
		t.pb("1.喝下这杯香槟 2.不喝");
		save();
			choice.push(1);//{4,2,1} 
			t.pb("-> 喝下这杯香槟");
			t.pb("Mr.Az: 以防万一您忘了，让我给您点小提示。");
			t.pb("Mr.Az: 品香槟的正确方式是握住杯脚，咂一小口酒然后享受它的气泡。");
			t.pb("Mr.Az: 是的，就是这样。");
			t.pb("END.");
			save();choice.pop();//{4,2}
			choice.push(2);//{{4,2,2}
			t.pb("-> 不喝");
			t.pb("Mr.Az: 您是要把它留到今后么？");
			t.pb("Mr.Az: 好吧，未来还会有很多值得祝酒的日子。");
			t.pb("Mr.Az: 但是，主管，请您不要在我背后偷偷喝掉它。");
			t.pb("Mr.Az: 酒只有与他人共赏时才能体现出它的价值2。");
			t.pb("END.");
			save();
			choice.pop();//{4,2} 
		choice.pop();//{4}
	choice.pop();//{} 
		
	return ;
}
