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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeMailProfile request structure.
                */
                class DescribeMailProfileRequest : public AbstractModel
                {
                public:
                    DescribeMailProfileRequest();
                    ~DescribeMailProfileRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
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
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page in paginated queries. Maximum value: `50`.
                     * @return Limit Number of results per page in paginated queries. Maximum value: `50`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page in paginated queries. Maximum value: `50`.
                     * @param _limit Number of results per page in paginated queries. Maximum value: `50`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query by email configuration name. The name of the scheduled task email configuration should be in the format of "scheduler_"+{instanceId}.
                     * @return ProfileName Query by email configuration name. The name of the scheduled task email configuration should be in the format of "scheduler_"+{instanceId}.
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置Query by email configuration name. The name of the scheduled task email configuration should be in the format of "scheduler_"+{instanceId}.
                     * @param _profileName Query by email configuration name. The name of the scheduled task email configuration should be in the format of "scheduler_"+{instanceId}.
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                private:

                    /**
                     * Configuration type. Valid values: `dbScan_mail_configuration` (email configuration of the database inspection report), `scheduler_mail_configuration` (email configuration of the scheduled task report).
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page in paginated queries. Maximum value: `50`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query by email configuration name. The name of the scheduled task email configuration should be in the format of "scheduler_"+{instanceId}.
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILEREQUEST_H_
