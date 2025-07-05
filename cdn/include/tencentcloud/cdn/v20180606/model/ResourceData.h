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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CdnData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * This API is used to query an object and its access details.
                */
                class ResourceData : public AbstractModel
                {
                public:
                    ResourceData();
                    ~ResourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name. 
A single domain name: Queries domain name details by a domain name. The details of the domain name will be displayed when the passed parameter `detail` is `true`.
Multiple domain names: Queries domain name details by multiple domain names. The aggregated details of the domain names will be displayed.
Project ID: Queries domain name details by a project ID. The aggregated details of the domain names of the project will be displayed.
`all`: Account-level data, which is aggregated details of all domain names of an account.
                     * @return Resource Resource name. 
A single domain name: Queries domain name details by a domain name. The details of the domain name will be displayed when the passed parameter `detail` is `true`.
Multiple domain names: Queries domain name details by multiple domain names. The aggregated details of the domain names will be displayed.
Project ID: Queries domain name details by a project ID. The aggregated details of the domain names of the project will be displayed.
`all`: Account-level data, which is aggregated details of all domain names of an account.
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resource name. 
A single domain name: Queries domain name details by a domain name. The details of the domain name will be displayed when the passed parameter `detail` is `true`.
Multiple domain names: Queries domain name details by multiple domain names. The aggregated details of the domain names will be displayed.
Project ID: Queries domain name details by a project ID. The aggregated details of the domain names of the project will be displayed.
`all`: Account-level data, which is aggregated details of all domain names of an account.
                     * @param _resource Resource name. 
A single domain name: Queries domain name details by a domain name. The details of the domain name will be displayed when the passed parameter `detail` is `true`.
Multiple domain names: Queries domain name details by multiple domain names. The aggregated details of the domain names will be displayed.
Project ID: Queries domain name details by a project ID. The aggregated details of the domain names of the project will be displayed.
`all`: Account-level data, which is aggregated details of all domain names of an account.
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Data details of a resource
                     * @return CdnData Data details of a resource
                     * 
                     */
                    std::vector<CdnData> GetCdnData() const;

                    /**
                     * 设置Data details of a resource
                     * @param _cdnData Data details of a resource
                     * 
                     */
                    void SetCdnData(const std::vector<CdnData>& _cdnData);

                    /**
                     * 判断参数 CdnData 是否已赋值
                     * @return CdnData 是否已赋值
                     * 
                     */
                    bool CdnDataHasBeenSet() const;

                private:

                    /**
                     * Resource name. 
A single domain name: Queries domain name details by a domain name. The details of the domain name will be displayed when the passed parameter `detail` is `true`.
Multiple domain names: Queries domain name details by multiple domain names. The aggregated details of the domain names will be displayed.
Project ID: Queries domain name details by a project ID. The aggregated details of the domain names of the project will be displayed.
`all`: Account-level data, which is aggregated details of all domain names of an account.
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Data details of a resource
                     */
                    std::vector<CdnData> m_cdnData;
                    bool m_cdnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEDATA_H_
