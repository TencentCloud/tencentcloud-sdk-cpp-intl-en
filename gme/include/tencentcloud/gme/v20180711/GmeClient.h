/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
#define TENCENTCLOUD_GME_V20180711_GMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gme/v20180711/model/CreateAppRequest.h>
#include <tencentcloud/gme/v20180711/model/CreateAppResponse.h>
#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberRequest.h>
#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationDataRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationDataResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResultListRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeScanResultListResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusResponse.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceRequest.h>
#include <tencentcloud/gme/v20180711/model/ScanVoiceResponse.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            class GmeClient : public AbstractClient
            {
            public:
                GmeClient(const Credential &credential, const std::string &region);
                GmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoomMemberResponse> DeleteRoomMemberOutcome;
                typedef std::future<DeleteRoomMemberOutcome> DeleteRoomMemberOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DeleteRoomMemberRequest&, DeleteRoomMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppStatisticsResponse> DescribeAppStatisticsOutcome;
                typedef std::future<DescribeAppStatisticsOutcome> DescribeAppStatisticsOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeAppStatisticsRequest&, DescribeAppStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationDataResponse> DescribeApplicationDataOutcome;
                typedef std::future<DescribeApplicationDataOutcome> DescribeApplicationDataOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeApplicationDataRequest&, DescribeApplicationDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanResultListResponse> DescribeScanResultListOutcome;
                typedef std::future<DescribeScanResultListOutcome> DescribeScanResultListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeScanResultListRequest&, DescribeScanResultListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanResultListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppStatusResponse> ModifyAppStatusOutcome;
                typedef std::future<ModifyAppStatusOutcome> ModifyAppStatusOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyAppStatusRequest&, ModifyAppStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVoiceResponse> ScanVoiceOutcome;
                typedef std::future<ScanVoiceOutcome> ScanVoiceOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ScanVoiceRequest&, ScanVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVoiceAsyncHandler;



                /**
                 *This API is used to create a GME application.
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *This API is used to delete a room or remove members from the room.
                 * @param req DeleteRoomMemberRequest
                 * @return DeleteRoomMemberOutcome
                 */
                DeleteRoomMemberOutcome DeleteRoomMember(const Model::DeleteRoomMemberRequest &request);
                void DeleteRoomMemberAsync(const Model::DeleteRoomMemberRequest& request, const DeleteRoomMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoomMemberOutcomeCallable DeleteRoomMemberCallable(const Model::DeleteRoomMemberRequest& request);

                /**
                 *This API is used to query the usage statistics of a GME application, including those of Voice Chat, Voice Message Service, Voice Analysis, etc. The maximum query period is the past 30 days.
                 * @param req DescribeAppStatisticsRequest
                 * @return DescribeAppStatisticsOutcome
                 */
                DescribeAppStatisticsOutcome DescribeAppStatistics(const Model::DescribeAppStatisticsRequest &request);
                void DescribeAppStatisticsAsync(const Model::DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppStatisticsOutcomeCallable DescribeAppStatisticsCallable(const Model::DescribeAppStatisticsRequest& request);

                /**
                 *This API is used to query data details for up to the past 90 days.
                 * @param req DescribeApplicationDataRequest
                 * @return DescribeApplicationDataOutcome
                 */
                DescribeApplicationDataOutcome DescribeApplicationData(const Model::DescribeApplicationDataRequest &request);
                void DescribeApplicationDataAsync(const Model::DescribeApplicationDataRequest& request, const DescribeApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationDataOutcomeCallable DescribeApplicationDataCallable(const Model::DescribeApplicationDataRequest& request);

                /**
                 *This API is used to query the result of voice moderation tasks. Up to 100 tasks can be queried in one time.
<p style="color:red">If the `Callback` field is not set when a voice moderation task is submitted, this API is called to query the moderation result.</p>
                 * @param req DescribeScanResultListRequest
                 * @return DescribeScanResultListOutcome
                 */
                DescribeScanResultListOutcome DescribeScanResultList(const Model::DescribeScanResultListRequest &request);
                void DescribeScanResultListAsync(const Model::DescribeScanResultListRequest& request, const DescribeScanResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanResultListOutcomeCallable DescribeScanResultListCallable(const Model::DescribeScanResultListRequest& request);

                /**
                 *This API is used to change the status of an application.
                 * @param req ModifyAppStatusRequest
                 * @return ModifyAppStatusOutcome
                 */
                ModifyAppStatusOutcome ModifyAppStatus(const Model::ModifyAppStatusRequest &request);
                void ModifyAppStatusAsync(const Model::ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppStatusOutcomeCallable ModifyAppStatusCallable(const Model::ModifyAppStatusRequest& request);

                /**
                 *This API is used to submit a voice moderation task. Up to 100 tasks can be added in a task. Make sure you have activated Voice Analysis Service in [GME Console > Voice Content Moderation > Service Configuration](https://console.cloud.tencent.com/gamegme/conf).
</br></br>

<h4><b>Free trial:</b></h4>
<li>You can try out the Voice Analysis Service free of charge in <a href="https://console.cloud.tencent.com/gamegme/tryout">GME Console > Voice Content Moderation > Product Trial</a>.</li>
</br>

<h4><b>API feature description:</b></h4>
<li>This API checks voice streams or files for non-compliant content.</li>
<li>The detection result can be queried by setting the callback address (`Callback`) or calling the `DescribeScanResultList` API for polling.</li>
<li>The scenario can be specified, such as abusive or pornographic.</li>
<li>Detection tasks can be submitted in batches. Up to 100 tasks can be added in the detection task list.</li>
</br>
<h4><b>Audio file limit description:</b></h4>
<li>Audio file size limit: 100 MB</li>
<li>Audio file duration limit: 30 minutes</li>
<li>Supported audio file formats: .wav, .m4a, .amr, .mp3, .aac, .wma, .ogg</li>
</br>
<h4><b>Voice stream limit description:</b></h4>
<li>Supported voice stream formats: .m3u8, .flv</li>
<li>Supported voice stream transfer protocols: RTMP, HTTP, HTTPS</li>
<li>Voice stream duration limit: 4 hours</li>
<li>Audio/video stream separation and audio stream analysis are supported</li>
</br>
<h4 id="Label_Value"><b>`Scenes` and `Label` parameter description:</b></h4>
<p>When submitting a voice detection task, you need to specify the `Scenes` parameter. <font color="red">You are currently required to set the `Scenes` parameter to `["default"]`</font>. The detection result will contain the scenario specified at the time of request and detection result in the corresponding type.</p>
<table>
<thread>
<tr>
<th>Scenario</th>
<th>Description</th>
<th>Label</th>
</tr>
</thread>
<tbody>
<tr>
<td>Voice detection</td>
<td>Voice detection type</td>
<td>
<p>`normal`: Normal</p>
<p>`porn`: Pornographic</p>
<p>`abuse`: Abusive</p>
<p>`ad`: Advertising</p>
<p>`contraband`: Prohibited</p>
<p>`customized`: Custom keyword library. This feature is only available to beta users. To try it out, please <a href="https://intl.cloud.tencent.com/apply/p/8809fjcik56?from_cn_redirect=1">contact us</a>.</p>
</td>
</tr>
</tbody>
</table>
</br>
<h4 id="Callback_Declare"><b>Callback description:</b></h4>
<li>If the callback address parameter `Callback` (i.e., the URL of an HTTP(S) API) is specified in the request parameters, then the POST method should be supported and transferred data should be encoded with UTF-8.</li>
<li>After the callback data is pushed, if the HTTP status code received is 200, the push is successful.</li>
<li>HTTP header parameter description:</li>
<table>
<thread>
<tr>
<th>Item</th>
<th>Type</th>
<th>Required</th>
<th>Description</th>
</tr>
</thread>
<tbody>
<tr>
<td>Signatue</td>
<td>string</td>
<td>Yes</td>
<td>Signature. For more information, please see <a href="#Callback_Signatue">Signature generation description</a>.</td>
</tr>
</tbody>
</table>
<ul  id="Callback_Signatue">
	<li>Signature generation description:</li>
	<ul>
		<li>The HMAC-SH1 algorithm should be used, and the result should be encoded with Base64;</li>
		<li>The original signature string is the entire JSON content of POST and body (the length is subject to `Content-Length`);</li>
		<li>The signature key is the `SecretKey` of the application, which can be viewed in the console.</li>
	</ul>
</ul>

<li>Below is a sample callback <font color="red">(for more information on the fields, please see the structure:
<a href="https://intl.cloud.tencent.com/document/api/607/35375?from_cn_redirect=1#DescribeScanResult" target="_blank">DescribeScanResult</a>)</font>:</li>
<pre><code>{
	"Code": 0,
	"DataId": "1400000000_test_data_id",
	"ScanFinishTime": 1566720906,
	"HitFlag": true,
	"Live": false,
	"Msg": "",
	"ScanPiece": [{
		"DumpUrl": "",
		"HitFlag": true,
		"MainType": "abuse",
		"RoomId": "123",
		"OpenId": "xxx",
		"Info":"",
		"Offset": 0,
		"Duration": 3400,
		"PieceStartTime":1574684231,
		"ScanDetail": [{
			"EndTime": 1110,
			"KeyWord": "xxx",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 1110
		}, {
			"EndTime": 1380,
			"KeyWord": "xxx",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 930
		}, {
			"EndTime": 1560,
			"KeyWord": "xxx",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 930
		}, {
			"EndTime": 2820,
			"KeyWord": "xxx",
			"Label": "abuse",
			"Rate": "90.00",
			"StartTime": 2490
		}]
	}],
	"ScanStartTime": 1566720905,
	"Scenes": [
		"default"
	],
	"Status": "Success",
	"TaskId": "xxx",
	"Url": "https://xxx/xxx.m4a"
}
</code></pre>
                 * @param req ScanVoiceRequest
                 * @return ScanVoiceOutcome
                 */
                ScanVoiceOutcome ScanVoice(const Model::ScanVoiceRequest &request);
                void ScanVoiceAsync(const Model::ScanVoiceRequest& request, const ScanVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVoiceOutcomeCallable ScanVoiceCallable(const Model::ScanVoiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
