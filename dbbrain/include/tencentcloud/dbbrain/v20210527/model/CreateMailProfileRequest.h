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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEMAILPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEMAILPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ProfileInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateMailProfile request structure.
                */
                class CreateMailProfileRequest : public AbstractModel
                {
                public:
                    CreateMailProfileRequest();
                    ~CreateMailProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Email configuration.
                     * @return ProfileInfo Email configuration.
                     * 
                     */
                    ProfileInfo GetProfileInfo() const;

                    /**
                     * 设置Email configuration.
                     * @param _profileInfo Email configuration.
                     * 
                     */
                    void SetProfileInfo(const ProfileInfo& _profileInfo);

                    /**
                     * 判断参数 ProfileInfo 是否已赋值
                     * @return ProfileInfo 是否已赋值
                     * 
                     */
                    bool ProfileInfoHasBeenSet() const;

                    /**
                     * 获取Configuration level. Valid values: `User` (user-level), `Instance` (instance-level). For database inspection emails, it should be `User`. For scheduled task emails, it should be `Instance`.
                     * @return ProfileLevel Configuration level. Valid values: `User` (user-level), `Instance` (instance-level). For database inspection emails, it should be `User`. For scheduled task emails, it should be `Instance`.
                     * 
                     */
                    std::string GetProfileLevel() const;

                    /**
                     * 设置Configuration level. Valid values: `User` (user-level), `Instance` (instance-level). For database inspection emails, it should be `User`. For scheduled task emails, it should be `Instance`.
                     * @param _profileLevel Configuration level. Valid values: `User` (user-level), `Instance` (instance-level). For database inspection emails, it should be `User`. For scheduled task emails, it should be `Instance`.
                     * 
                     */
                    void SetProfileLevel(const std::string& _profileLevel);

                    /**
                     * 判断参数 ProfileLevel 是否已赋值
                     * @return ProfileLevel 是否已赋值
                     * 
                     */
                    bool ProfileLevelHasBeenSet() const;

                    /**
                     * 获取Configuration name, which needs to be unique. For database inspection emails, this name can be customized as needed. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     * @return ProfileName Configuration name, which needs to be unique. For database inspection emails, this name can be customized as needed. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置Configuration name, which needs to be unique. For database inspection emails, this name can be customized as needed. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     * @param _profileName Configuration name, which needs to be unique. For database inspection emails, this name can be customized as needed. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                    /**
                     * 获取Configuration type. Valid values: `dbScan_mail_configuration` (email configuration of the database inspection report), `scheduler_mail_configuration` (email configuration of the scheduled task report).
                     * @return ProfileType Configuration type. Valid values: `dbScan_mail_configuration` (email configuration of the database inspection report), `scheduler_mail_configuration` (email configuration of the scheduled task report).
                     * 
                     */
                    std::string GetProfileType() const;

                    /**
                     * 设置Configuration type. Valid values: `dbScan_mail_configuration` (email configuration of the database inspection report), `scheduler_mail_configuration` (email configuration of the scheduled task report).
                     * @param _profileType Configuration type. Valid values: `dbScan_mail_configuration` (email configuration of the database inspection report), `scheduler_mail_configuration` (email configuration of the scheduled task report).
                     * 
                     */
                    void SetProfileType(const std::string& _profileType);

                    /**
                     * 判断参数 ProfileType 是否已赋值
                     * @return ProfileType 是否已赋值
                     * 
                     */
                    bool ProfileTypeHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Instance ID bound with the configuration, which is set when the configuration level is `Instance`. Only one instance can be bound at a time. When the configuration level is `User`, leave this parameter empty.
                     * @return BindInstanceIds Instance ID bound with the configuration, which is set when the configuration level is `Instance`. Only one instance can be bound at a time. When the configuration level is `User`, leave this parameter empty.
                     * 
                     */
                    std::vector<std::string> GetBindInstanceIds() const;

                    /**
                     * 设置Instance ID bound with the configuration, which is set when the configuration level is `Instance`. Only one instance can be bound at a time. When the configuration level is `User`, leave this parameter empty.
                     * @param _bindInstanceIds Instance ID bound with the configuration, which is set when the configuration level is `Instance`. Only one instance can be bound at a time. When the configuration level is `User`, leave this parameter empty.
                     * 
                     */
                    void SetBindInstanceIds(const std::vector<std::string>& _bindInstanceIds);

                    /**
                     * 判断参数 BindInstanceIds 是否已赋值
                     * @return BindInstanceIds 是否已赋值
                     * 
                     */
                    bool BindInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Email configuration.
                     */
                    ProfileInfo m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                    /**
                     * Configuration level. Valid values: `User` (user-level), `Instance` (instance-level). For database inspection emails, it should be `User`. For scheduled task emails, it should be `Instance`.
                     */
                    std::string m_profileLevel;
                    bool m_profileLevelHasBeenSet;

                    /**
                     * Configuration name, which needs to be unique. For database inspection emails, this name can be customized as needed. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * Configuration type. Valid values: `dbScan_mail_configuration` (email configuration of the database inspection report), `scheduler_mail_configuration` (email configuration of the scheduled task report).
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Instance ID bound with the configuration, which is set when the configuration level is `Instance`. Only one instance can be bound at a time. When the configuration level is `User`, leave this parameter empty.
                     */
                    std::vector<std::string> m_bindInstanceIds;
                    bool m_bindInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEMAILPROFILEREQUEST_H_
