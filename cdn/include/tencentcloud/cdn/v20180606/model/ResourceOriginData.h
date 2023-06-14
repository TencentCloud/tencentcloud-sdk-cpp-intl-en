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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEORIGINDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEORIGINDATA_H_

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
                * This API is used to query an object and its origin-pull details.
                */
                class ResourceOriginData : public AbstractModel
                {
                public:
                    ResourceOriginData();
                    ~ResourceOriginData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name, which is classified as follows based on different query filters:
A specific domain name: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
Project ID: ID of the specifically queried project
`all`: Details at the account level
                     * @return Resource Resource name, which is classified as follows based on different query filters:
A specific domain name: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
Project ID: ID of the specifically queried project
`all`: Details at the account level
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resource name, which is classified as follows based on different query filters:
A specific domain name: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
Project ID: ID of the specifically queried project
`all`: Details at the account level
                     * @param _resource Resource name, which is classified as follows based on different query filters:
A specific domain name: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
Project ID: ID of the specifically queried project
`all`: Details at the account level
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
                     * 获取Origin-pull data details
                     * @return OriginData Origin-pull data details
                     * 
                     */
                    std::vector<CdnData> GetOriginData() const;

                    /**
                     * 设置Origin-pull data details
                     * @param _originData Origin-pull data details
                     * 
                     */
                    void SetOriginData(const std::vector<CdnData>& _originData);

                    /**
                     * 判断参数 OriginData 是否已赋值
                     * @return OriginData 是否已赋值
                     * 
                     */
                    bool OriginDataHasBeenSet() const;

                private:

                    /**
                     * Resource name, which is classified as follows based on different query filters:
A specific domain name: Details of the domain name
`multiDomains`: Aggregated details of multiple domain names
Project ID: ID of the specifically queried project
`all`: Details at the account level
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Origin-pull data details
                     */
                    std::vector<CdnData> m_originData;
                    bool m_originDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RESOURCEORIGINDATA_H_
