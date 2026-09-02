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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYTYPECOUNTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYTYPECOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Image repository type statistics
                */
                class ImageRegistryTypeCountItem : public AbstractModel
                {
                public:
                    ImageRegistryTypeCountItem();
                    ~ImageRegistryTypeCountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Repository type</p>
                     * @return RegistryType <p>Repository type</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>Repository type</p>
                     * @param _registryType <p>Repository type</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of warehouses</p>
                     * @return Count <p>Number of warehouses</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>Number of warehouses</p>
                     * @param _count <p>Number of warehouses</p>
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * <p>Repository type</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>Number of warehouses</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYTYPECOUNTITEM_H_
