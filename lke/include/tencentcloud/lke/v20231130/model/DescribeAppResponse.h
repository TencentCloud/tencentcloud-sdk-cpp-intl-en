/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/BaseConfig.h>
#include <tencentcloud/lke/v20231130/model/AppConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeApp response structure.
                */
                class DescribeAppResponse : public AbstractModel
                {
                public:
                    DescribeAppResponse();
                    ~DescribeAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return AppBizId Application ID.
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @return AppType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取Application type description.
                     * @return AppTypeDesc Application type description.
                     * 
                     */
                    std::string GetAppTypeDesc() const;

                    /**
                     * 判断参数 AppTypeDesc 是否已赋值
                     * @return AppTypeDesc 是否已赋值
                     * 
                     */
                    bool AppTypeDescHasBeenSet() const;

                    /**
                     * 获取Application type description.
                     * @return BaseConfig Application type description.
                     * 
                     */
                    BaseConfig GetBaseConfig() const;

                    /**
                     * 判断参数 BaseConfig 是否已赋值
                     * @return BaseConfig 是否已赋值
                     * 
                     */
                    bool BaseConfigHasBeenSet() const;

                    /**
                     * 获取Application configuration.
                     * @return AppConfig Application configuration.
                     * 
                     */
                    AppConfig GetAppConfig() const;

                    /**
                     * 判断参数 AppConfig 是否已赋值
                     * @return AppConfig 是否已赋值
                     * 
                     */
                    bool AppConfigHasBeenSet() const;

                    /**
                     * 获取Whether the avatar is under appeal.
                     * @return AvatarInAppeal Whether the avatar is under appeal.
                     * 
                     */
                    bool GetAvatarInAppeal() const;

                    /**
                     * 判断参数 AvatarInAppeal 是否已赋值
                     * @return AvatarInAppeal 是否已赋值
                     * 
                     */
                    bool AvatarInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the role description is under appeal.
                     * @return RoleInAppeal Whether the role description is under appeal.
                     * 
                     */
                    bool GetRoleInAppeal() const;

                    /**
                     * 判断参数 RoleInAppeal 是否已赋值
                     * @return RoleInAppeal 是否已赋值
                     * 
                     */
                    bool RoleInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the name is under appeal.
                     * @return NameInAppeal Whether the name is under appeal.
                     * 
                     */
                    bool GetNameInAppeal() const;

                    /**
                     * 判断参数 NameInAppeal 是否已赋值
                     * @return NameInAppeal 是否已赋值
                     * 
                     */
                    bool NameInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the welcome words are under appeal.
                     * @return GreetingInAppeal Whether the welcome words are under appeal.
                     * 
                     */
                    bool GetGreetingInAppeal() const;

                    /**
                     * 判断参数 GreetingInAppeal 是否已赋值
                     * @return GreetingInAppeal 是否已赋值
                     * 
                     */
                    bool GreetingInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the response message for unknown questions is under appeal.
                     * @return BareAnswerInAppeal Whether the response message for unknown questions is under appeal.
                     * 
                     */
                    bool GetBareAnswerInAppeal() const;

                    /**
                     * 判断参数 BareAnswerInAppeal 是否已赋值
                     * @return BareAnswerInAppeal 是否已赋值
                     * 
                     */
                    bool BareAnswerInAppealHasBeenSet() const;

                    /**
                     * 获取App key of the application.
                     * @return AppKey App key of the application.
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取Application status. 1: offline; 2: running; 3: disabled.
                     * @return AppStatus Application status. 1: offline; 2: running; 3: disabled.
                     * 
                     */
                    uint64_t GetAppStatus() const;

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return AppStatusDesc Status description.
                     * 
                     */
                    std::string GetAppStatusDesc() const;

                    /**
                     * 判断参数 AppStatusDesc 是否已赋值
                     * @return AppStatusDesc 是否已赋值
                     * 
                     */
                    bool AppStatusDescHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Application type description.
                     */
                    std::string m_appTypeDesc;
                    bool m_appTypeDescHasBeenSet;

                    /**
                     * Application type description.
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                    /**
                     * Application configuration.
                     */
                    AppConfig m_appConfig;
                    bool m_appConfigHasBeenSet;

                    /**
                     * Whether the avatar is under appeal.
                     */
                    bool m_avatarInAppeal;
                    bool m_avatarInAppealHasBeenSet;

                    /**
                     * Whether the role description is under appeal.
                     */
                    bool m_roleInAppeal;
                    bool m_roleInAppealHasBeenSet;

                    /**
                     * Whether the name is under appeal.
                     */
                    bool m_nameInAppeal;
                    bool m_nameInAppealHasBeenSet;

                    /**
                     * Whether the welcome words are under appeal.
                     */
                    bool m_greetingInAppeal;
                    bool m_greetingInAppealHasBeenSet;

                    /**
                     * Whether the response message for unknown questions is under appeal.
                     */
                    bool m_bareAnswerInAppeal;
                    bool m_bareAnswerInAppealHasBeenSet;

                    /**
                     * App key of the application.
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * Application status. 1: offline; 2: running; 3: disabled.
                     */
                    uint64_t m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_appStatusDesc;
                    bool m_appStatusDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPRESPONSE_H_
