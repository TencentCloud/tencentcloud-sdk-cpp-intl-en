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

#ifndef TENCENTCLOUD_STS_V20180813_STSCLIENT_H_
#define TENCENTCLOUD_STS_V20180813_STSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleResponse.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithSAMLRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithSAMLResponse.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithWebIdentityRequest.h>
#include <tencentcloud/sts/v20180813/model/AssumeRoleWithWebIdentityResponse.h>
#include <tencentcloud/sts/v20180813/model/GetCallerIdentityRequest.h>
#include <tencentcloud/sts/v20180813/model/GetCallerIdentityResponse.h>
#include <tencentcloud/sts/v20180813/model/GetFederationTokenRequest.h>
#include <tencentcloud/sts/v20180813/model/GetFederationTokenResponse.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            class StsClient : public AbstractClient
            {
            public:
                StsClient(const Credential &credential, const std::string &region);
                StsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssumeRoleResponse> AssumeRoleOutcome;
                typedef std::future<AssumeRoleOutcome> AssumeRoleOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::AssumeRoleRequest&, AssumeRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::AssumeRoleWithSAMLResponse> AssumeRoleWithSAMLOutcome;
                typedef std::future<AssumeRoleWithSAMLOutcome> AssumeRoleWithSAMLOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::AssumeRoleWithSAMLRequest&, AssumeRoleWithSAMLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleWithSAMLAsyncHandler;
                typedef Outcome<Core::Error, Model::AssumeRoleWithWebIdentityResponse> AssumeRoleWithWebIdentityOutcome;
                typedef std::future<AssumeRoleWithWebIdentityOutcome> AssumeRoleWithWebIdentityOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::AssumeRoleWithWebIdentityRequest&, AssumeRoleWithWebIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssumeRoleWithWebIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCallerIdentityResponse> GetCallerIdentityOutcome;
                typedef std::future<GetCallerIdentityOutcome> GetCallerIdentityOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::GetCallerIdentityRequest&, GetCallerIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCallerIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFederationTokenResponse> GetFederationTokenOutcome;
                typedef std::future<GetFederationTokenOutcome> GetFederationTokenOutcomeCallable;
                typedef std::function<void(const StsClient*, const Model::GetFederationTokenRequest&, GetFederationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFederationTokenAsyncHandler;



                /**
                 *This API is used to request for the temporary security credentials of a role.
                 * @param req AssumeRoleRequest
                 * @return AssumeRoleOutcome
                 */
                AssumeRoleOutcome AssumeRole(const Model::AssumeRoleRequest &request);
                void AssumeRoleAsync(const Model::AssumeRoleRequest& request, const AssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssumeRoleOutcomeCallable AssumeRoleCallable(const Model::AssumeRoleRequest& request);

                /**
                 *This API is used to request for the temporary credentials for a role that has been authenticated via a SAML assertion.
                 * @param req AssumeRoleWithSAMLRequest
                 * @return AssumeRoleWithSAMLOutcome
                 */
                AssumeRoleWithSAMLOutcome AssumeRoleWithSAML(const Model::AssumeRoleWithSAMLRequest &request);
                void AssumeRoleWithSAMLAsync(const Model::AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssumeRoleWithSAMLOutcomeCallable AssumeRoleWithSAMLCallable(const Model::AssumeRoleWithSAMLRequest& request);

                /**
                 *This API is used to apply for an OIDC role credential.
                 * @param req AssumeRoleWithWebIdentityRequest
                 * @return AssumeRoleWithWebIdentityOutcome
                 */
                AssumeRoleWithWebIdentityOutcome AssumeRoleWithWebIdentity(const Model::AssumeRoleWithWebIdentityRequest &request);
                void AssumeRoleWithWebIdentityAsync(const Model::AssumeRoleWithWebIdentityRequest& request, const AssumeRoleWithWebIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssumeRoleWithWebIdentityOutcomeCallable AssumeRoleWithWebIdentityCallable(const Model::AssumeRoleWithWebIdentityRequest& request);

                /**
                 *This API is used to get the identity information of the current caller.
The persistent keys of the root account and sub-account as well as the temporary credentials generated by `AssumeRole` and `GetFederationToken` can be used to get the identity information.
                 * @param req GetCallerIdentityRequest
                 * @return GetCallerIdentityOutcome
                 */
                GetCallerIdentityOutcome GetCallerIdentity(const Model::GetCallerIdentityRequest &request);
                void GetCallerIdentityAsync(const Model::GetCallerIdentityRequest& request, const GetCallerIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCallerIdentityOutcomeCallable GetCallerIdentityCallable(const Model::GetCallerIdentityRequest& request);

                /**
                 *This API is used to get temporary credentials for a federated user.
                 * @param req GetFederationTokenRequest
                 * @return GetFederationTokenOutcome
                 */
                GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest &request);
                void GetFederationTokenAsync(const Model::GetFederationTokenRequest& request, const GetFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFederationTokenOutcomeCallable GetFederationTokenCallable(const Model::GetFederationTokenRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_STSCLIENT_H_
