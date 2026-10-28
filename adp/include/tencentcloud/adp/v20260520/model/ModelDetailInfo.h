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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELDETAILINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelParams.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Model details
                */
                class ModelDetailInfo : public AbstractModel
                {
                public:
                    ModelDetailInfo();
                    ~ModelDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model alias.
                     * @return Alias Model alias.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Model alias.
                     * @param _alias Model alias.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Limit on number of historical conversations
                     * @return HistoryLimit Limit on number of historical conversations
                     * 
                     */
                    uint64_t GetHistoryLimit() const;

                    /**
                     * 设置Limit on number of historical conversations
                     * @param _historyLimit Limit on number of historical conversations
                     * 
                     */
                    void SetHistoryLimit(const uint64_t& _historyLimit);

                    /**
                     * 判断参数 HistoryLimit 是否已赋值
                     * @return HistoryLimit 是否已赋值
                     * 
                     */
                    bool HistoryLimitHasBeenSet() const;

                    /**
                     * 获取Unique model ID
                     * @return ModelId Unique model ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置Unique model ID
                     * @param _modelId Unique model ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取Model parameters
                     * @return ModelParams Model parameters
                     * 
                     */
                    ModelParams GetModelParams() const;

                    /**
                     * 设置Model parameters
                     * @param _modelParams Model parameters
                     * 
                     */
                    void SetModelParams(const ModelParams& _modelParams);

                    /**
                     * 判断参数 ModelParams 是否已赋值
                     * @return ModelParams 是否已赋值
                     * 
                     */
                    bool ModelParamsHasBeenSet() const;

                private:

                    /**
                     * Model alias.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Limit on number of historical conversations
                     */
                    uint64_t m_historyLimit;
                    bool m_historyLimitHasBeenSet;

                    /**
                     * Unique model ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * Model parameters
                     */
                    ModelParams m_modelParams;
                    bool m_modelParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELDETAILINFO_H_
