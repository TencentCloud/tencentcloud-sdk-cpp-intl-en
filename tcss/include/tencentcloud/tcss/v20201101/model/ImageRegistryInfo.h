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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREGISTRYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREGISTRYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image repository details.
                */
                class ImageRegistryInfo : public AbstractModel
                {
                public:
                    ImageRegistryInfo();
                    ~ImageRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取repository name
                     * @return Name repository name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置repository name
                     * @param _name repository name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取repository type
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * @return Type repository type
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置repository type
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * @param _type repository type
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取repository address
                     * @return Address repository address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置repository address
                     * @param _address repository address
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * repository name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * repository type
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * repository address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREGISTRYINFO_H_
