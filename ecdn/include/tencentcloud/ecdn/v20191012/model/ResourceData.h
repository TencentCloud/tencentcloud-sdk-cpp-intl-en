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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_RESOURCEDATA_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_RESOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/EcdnData.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Query object and its access details
                */
                class ResourceData : public AbstractModel
                {
                public:
                    ResourceData();
                    ~ResourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name, which is categorized as follows based on different query conditions:
Specific domain name: indicates the details of the specific domain name
multiDomains: indicates aggregated details of multiple domain names
Project ID: displays the ID of the specified project to be queried
all: details at the account level
                     * @return Resource Resource name, which is categorized as follows based on different query conditions:
Specific domain name: indicates the details of the specific domain name
multiDomains: indicates aggregated details of multiple domain names
Project ID: displays the ID of the specified project to be queried
all: details at the account level
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resource name, which is categorized as follows based on different query conditions:
Specific domain name: indicates the details of the specific domain name
multiDomains: indicates aggregated details of multiple domain names
Project ID: displays the ID of the specified project to be queried
all: details at the account level
                     * @param Resource Resource name, which is categorized as follows based on different query conditions:
Specific domain name: indicates the details of the specific domain name
multiDomains: indicates aggregated details of multiple domain names
Project ID: displays the ID of the specified project to be queried
all: details at the account level
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Data details of resource
                     * @return EcdnData Data details of resource
                     */
                    EcdnData GetEcdnData() const;

                    /**
                     * 设置Data details of resource
                     * @param EcdnData Data details of resource
                     */
                    void SetEcdnData(const EcdnData& _ecdnData);

                    /**
                     * 判断参数 EcdnData 是否已赋值
                     * @return EcdnData 是否已赋值
                     */
                    bool EcdnDataHasBeenSet() const;

                private:

                    /**
                     * Resource name, which is categorized as follows based on different query conditions:
Specific domain name: indicates the details of the specific domain name
multiDomains: indicates aggregated details of multiple domain names
Project ID: displays the ID of the specified project to be queried
all: details at the account level
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Data details of resource
                     */
                    EcdnData m_ecdnData;
                    bool m_ecdnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_RESOURCEDATA_H_
