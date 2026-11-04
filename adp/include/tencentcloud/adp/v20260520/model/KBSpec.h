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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ESConfig.h>
#include <tencentcloud/adp/v20260520/model/KBModelConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Collection of writable attributes of the knowledge base (used in conjunction with update_mask)
                */
                class KBSpec : public AbstractModel
                {
                public:
                    KBSpec();
                    ~KBSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>ES configuration</p>
                     * @return EsConfig <p>ES configuration</p>
                     * 
                     */
                    ESConfig GetEsConfig() const;

                    /**
                     * 设置<p>ES configuration</p>
                     * @param _esConfig <p>ES configuration</p>
                     * 
                     */
                    void SetEsConfig(const ESConfig& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取<p>Model configuration</p>
                     * @return ModelConfig <p>Model configuration</p>
                     * 
                     */
                    KBModelConfig GetModelConfig() const;

                    /**
                     * 设置<p>Model configuration</p>
                     * @param _modelConfig <p>Model configuration</p>
                     * 
                     */
                    void SetModelConfig(const KBModelConfig& _modelConfig);

                    /**
                     * 判断参数 ModelConfig 是否已赋值
                     * @return ModelConfig 是否已赋值
                     * 
                     */
                    bool ModelConfigHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base name</p>
                     * @return Name <p>Knowledge base name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Knowledge base name</p>
                     * @param _name <p>Knowledge base name</p>
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
                     * 获取<p>Owner ID</p>
                     * @return OwnerId <p>Owner ID</p>
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置<p>Owner ID</p>
                     * @param _ownerId <p>Owner ID</p>
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                private:

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>ES configuration</p>
                     */
                    ESConfig m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>Model configuration</p>
                     */
                    KBModelConfig m_modelConfig;
                    bool m_modelConfigHasBeenSet;

                    /**
                     * <p>Knowledge base name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Owner ID</p>
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBSPEC_H_
