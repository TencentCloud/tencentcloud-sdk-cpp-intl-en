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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESEARCHBUGINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESEARCHBUGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSearchBugInfo request structure.
                */
                class DescribeSearchBugInfoRequest : public AbstractModel
                {
                public:
                    DescribeSearchBugInfoRequest();
                    ~DescribeSearchBugInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type of the query action. `1`: Query emergency vulnerabilities; `2`: Query all vulnerabilities; `3`: Query a specific vulnerability. When `Id=3`, `CVEId` is required. 
                     * @return Id Type of the query action. `1`: Query emergency vulnerabilities; `2`: Query all vulnerabilities; `3`: Query a specific vulnerability. When `Id=3`, `CVEId` is required. 
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Type of the query action. `1`: Query emergency vulnerabilities; `2`: Query all vulnerabilities; `3`: Query a specific vulnerability. When `Id=3`, `CVEId` is required. 
                     * @param _id Type of the query action. `1`: Query emergency vulnerabilities; `2`: Query all vulnerabilities; `3`: Query a specific vulnerability. When `Id=3`, `CVEId` is required. 
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CVE number of the vulnerability. It's required when `Id=3`.
                     * @return CVEId CVE number of the vulnerability. It's required when `Id=3`.
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置CVE number of the vulnerability. It's required when `Id=3`.
                     * @param _cVEId CVE number of the vulnerability. It's required when `Id=3`.
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                private:

                    /**
                     * Type of the query action. `1`: Query emergency vulnerabilities; `2`: Query all vulnerabilities; `3`: Query a specific vulnerability. When `Id=3`, `CVEId` is required. 
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CVE number of the vulnerability. It's required when `Id=3`.
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESEARCHBUGINFOREQUEST_H_
