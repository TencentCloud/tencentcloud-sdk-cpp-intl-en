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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECATEGORY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECATEGORY_H_

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
                * Baseline classification basic information, covering both parent and subcategory layers.
                */
                class BaselineCategory : public AbstractModel
                {
                public:
                    BaselineCategory();
                    ~BaselineCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Baseline classification ID.</p>
                     * @return ID <p>Baseline classification ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Baseline classification ID.</p>
                     * @param _iD <p>Baseline classification ID.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline classification name (Chinese).</p>
                     * @return Name <p>Baseline classification name (Chinese).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Baseline classification name (Chinese).</p>
                     * @param _name <p>Baseline classification name (Chinese).</p>
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
                     * 获取<p>Baseline category description (Chinese).</p>
                     * @return Description <p>Baseline category description (Chinese).</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Baseline category description (Chinese).</p>
                     * @param _description <p>Baseline category description (Chinese).</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Detect the asset major category and distinguish between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @return CheckAssetType <p>Detect the asset major category and distinguish between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Detect the asset major category and distinguish between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @param _checkAssetType <p>Detect the asset major category and distinguish between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline classification ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Baseline classification name (Chinese).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Baseline category description (Chinese).</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Detect the asset major category and distinguish between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECATEGORY_H_
