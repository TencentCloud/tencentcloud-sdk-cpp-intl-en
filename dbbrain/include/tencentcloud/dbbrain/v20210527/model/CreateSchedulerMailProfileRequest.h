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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESCHEDULERMAILPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESCHEDULERMAILPROFILEREQUEST_H_

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
                * CreateSchedulerMailProfile request structure.
                */
                class CreateSchedulerMailProfileRequest : public AbstractModel
                {
                public:
                    CreateSchedulerMailProfileRequest();
                    ~CreateSchedulerMailProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Value range: 1-7, representing Monday to Sunday respectively.
                     * @return WeekConfiguration Value range: 1-7, representing Monday to Sunday respectively.
                     */
                    std::vector<int64_t> GetWeekConfiguration() const;

                    /**
                     * 设置Value range: 1-7, representing Monday to Sunday respectively.
                     * @param WeekConfiguration Value range: 1-7, representing Monday to Sunday respectively.
                     */
                    void SetWeekConfiguration(const std::vector<int64_t>& _weekConfiguration);

                    /**
                     * 判断参数 WeekConfiguration 是否已赋值
                     * @return WeekConfiguration 是否已赋值
                     */
                    bool WeekConfigurationHasBeenSet() const;

                    /**
                     * 获取Email configuration.
                     * @return ProfileInfo Email configuration.
                     */
                    ProfileInfo GetProfileInfo() const;

                    /**
                     * 设置Email configuration.
                     * @param ProfileInfo Email configuration.
                     */
                    void SetProfileInfo(const ProfileInfo& _profileInfo);

                    /**
                     * 判断参数 ProfileInfo 是否已赋值
                     * @return ProfileInfo 是否已赋值
                     */
                    bool ProfileInfoHasBeenSet() const;

                    /**
                     * 获取Configuration name, which needs to be unique. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     * @return ProfileName Configuration name, which needs to be unique. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置Configuration name, which needs to be unique. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     * @param ProfileName Configuration name, which needs to be unique. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     */
                    bool ProfileNameHasBeenSet() const;

                    /**
                     * 获取ID of the instance for which to configure subscription.
                     * @return BindInstanceId ID of the instance for which to configure subscription.
                     */
                    std::string GetBindInstanceId() const;

                    /**
                     * 设置ID of the instance for which to configure subscription.
                     * @param BindInstanceId ID of the instance for which to configure subscription.
                     */
                    void SetBindInstanceId(const std::string& _bindInstanceId);

                    /**
                     * 判断参数 BindInstanceId 是否已赋值
                     * @return BindInstanceId 是否已赋值
                     */
                    bool BindInstanceIdHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Value range: 1-7, representing Monday to Sunday respectively.
                     */
                    std::vector<int64_t> m_weekConfiguration;
                    bool m_weekConfigurationHasBeenSet;

                    /**
                     * Email configuration.
                     */
                    ProfileInfo m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                    /**
                     * Configuration name, which needs to be unique. For scheduled task emails, the name should be in the format of "scheduler_" + {instanceId}, such as "schduler_cdb-test".
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * ID of the instance for which to configure subscription.
                     */
                    std::string m_bindInstanceId;
                    bool m_bindInstanceIdHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESCHEDULERMAILPROFILEREQUEST_H_
