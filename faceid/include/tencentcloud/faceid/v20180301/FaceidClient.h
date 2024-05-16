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
#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultResponse.h>


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

                typedef Outcome<Core::Error, Model::ApplySdkVerificationTokenResponse> ApplySdkVerificationTokenOutcome;
                typedef std::future<ApplySdkVerificationTokenOutcome> ApplySdkVerificationTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplySdkVerificationTokenRequest&, ApplySdkVerificationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySdkVerificationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSdkVerificationResultResponse> GetSdkVerificationResultOutcome;
                typedef std::future<GetSdkVerificationResultOutcome> GetSdkVerificationResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetSdkVerificationResultRequest&, GetSdkVerificationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSdkVerificationResultAsyncHandler;



                /**
                 *This API is used to apply for a token before calling the Identity Verification SDK service each time. This token is required for initiating the verification process and getting the result after the verification is completed.
                 * @param req ApplySdkVerificationTokenRequest
                 * @return ApplySdkVerificationTokenOutcome
                 */
                ApplySdkVerificationTokenOutcome ApplySdkVerificationToken(const Model::ApplySdkVerificationTokenRequest &request);
                void ApplySdkVerificationTokenAsync(const Model::ApplySdkVerificationTokenRequest& request, const ApplySdkVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySdkVerificationTokenOutcomeCallable ApplySdkVerificationTokenCallable(const Model::ApplySdkVerificationTokenRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding token after the SDK-based verification is completed. The token is valid for three days after issuance and can be called multiple times.
                 * @param req GetSdkVerificationResultRequest
                 * @return GetSdkVerificationResultOutcome
                 */
                GetSdkVerificationResultOutcome GetSdkVerificationResult(const Model::GetSdkVerificationResultRequest &request);
                void GetSdkVerificationResultAsync(const Model::GetSdkVerificationResultRequest& request, const GetSdkVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSdkVerificationResultOutcomeCallable GetSdkVerificationResultCallable(const Model::GetSdkVerificationResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
