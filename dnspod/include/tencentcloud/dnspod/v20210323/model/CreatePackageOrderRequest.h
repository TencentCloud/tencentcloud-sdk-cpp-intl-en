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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEPACKAGEORDERREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEPACKAGEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreatePackageOrder request structure.
                */
                class CreatePackageOrderRequest : public AbstractModel
                {
                public:
                    CreatePackageOrderRequest();
                    ~CreatePackageOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Valid options for the package version are as follows:
DPG_PROFESSIONAL
DPG_ENTERPRISE
DPG_ULTIMATE
                     * @return Grade Valid options for the package version are as follows:
DPG_PROFESSIONAL
DPG_ENTERPRISE
DPG_ULTIMATE
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置Valid options for the package version are as follows:
DPG_PROFESSIONAL
DPG_ENTERPRISE
DPG_ULTIMATE
                     * @param _grade Valid options for the package version are as follows:
DPG_PROFESSIONAL
DPG_ENTERPRISE
DPG_ULTIMATE
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Valid options for the package version are as follows:
DPG_PROFESSIONAL
DPG_ENTERPRISE
DPG_ULTIMATE
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEPACKAGEORDERREQUEST_H_
