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

#ifndef TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
#define TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            class FaceidClient : public AbstractClient
            {
            public:
                FaceidClient(const Credential &credential, const std::string &region);
                FaceidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;



                /**
                 *This API is used to pass in a video and a photo, determine whether the person in the video is real, and if yes, then determine whether the person in the video is the same as that in the photo.
                 * @param req LivenessCompareRequest
                 * @return LivenessCompareOutcome
                 */
                LivenessCompareOutcome LivenessCompare(const Model::LivenessCompareRequest &request);
                void LivenessCompareAsync(const Model::LivenessCompareRequest& request, const LivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessCompareOutcomeCallable LivenessCompareCallable(const Model::LivenessCompareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
