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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ARCHITECTUREINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ARCHITECTUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Architecture information.
                */
                class ArchitectureInfo : public AbstractModel
                {
                public:
                    ArchitectureInfo();
                    ~ArchitectureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Architecture type.</p>
                     * @return Architecture <p>Architecture type.</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置<p>Architecture type.</p>
                     * @param _architecture <p>Architecture type.</p>
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>Architecture type name.</p>
                     * @return ArchitectureName <p>Architecture type name.</p>
                     * 
                     */
                    std::string GetArchitectureName() const;

                    /**
                     * 设置<p>Architecture type name.</p>
                     * @param _architectureName <p>Architecture type name.</p>
                     * 
                     */
                    void SetArchitectureName(const std::string& _architectureName);

                    /**
                     * 判断参数 ArchitectureName 是否已赋值
                     * @return ArchitectureName 是否已赋值
                     * 
                     */
                    bool ArchitectureNameHasBeenSet() const;

                    /**
                     * 获取<p>Architecture type display order.</p>
                     * @return Order <p>Architecture type display order.</p>
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置<p>Architecture type display order.</p>
                     * @param _order <p>Architecture type display order.</p>
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Instance specification families included in the architecture.</p>
                     * @return InstanceFamilies <p>Instance specification families included in the architecture.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceFamilies() const;

                    /**
                     * 设置<p>Instance specification families included in the architecture.</p>
                     * @param _instanceFamilies <p>Instance specification families included in the architecture.</p>
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<std::string>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                private:

                    /**
                     * <p>Architecture type.</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>Architecture type name.</p>
                     */
                    std::string m_architectureName;
                    bool m_architectureNameHasBeenSet;

                    /**
                     * <p>Architecture type display order.</p>
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Instance specification families included in the architecture.</p>
                     */
                    std::vector<std::string> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ARCHITECTUREINFO_H_
