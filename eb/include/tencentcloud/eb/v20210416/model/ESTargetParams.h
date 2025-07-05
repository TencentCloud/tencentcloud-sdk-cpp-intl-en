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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_ESTARGETPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_ESTARGETPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ES rule targets
                */
                class ESTargetParams : public AbstractModel
                {
                public:
                    ESTargetParams();
                    ~ESTargetParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network connection type
                     * @return NetMode Network connection type
                     * 
                     */
                    std::string GetNetMode() const;

                    /**
                     * 设置Network connection type
                     * @param _netMode Network connection type
                     * 
                     */
                    void SetNetMode(const std::string& _netMode);

                    /**
                     * 判断参数 NetMode 是否已赋值
                     * @return NetMode 是否已赋值
                     * 
                     */
                    bool NetModeHasBeenSet() const;

                    /**
                     * 获取Index prefix
                     * @return IndexPrefix Index prefix
                     * 
                     */
                    std::string GetIndexPrefix() const;

                    /**
                     * 设置Index prefix
                     * @param _indexPrefix Index prefix
                     * 
                     */
                    void SetIndexPrefix(const std::string& _indexPrefix);

                    /**
                     * 判断参数 IndexPrefix 是否已赋值
                     * @return IndexPrefix 是否已赋值
                     * 
                     */
                    bool IndexPrefixHasBeenSet() const;

                    /**
                     * 获取ES log rotation interval
                     * @return RotationInterval ES log rotation interval
                     * 
                     */
                    std::string GetRotationInterval() const;

                    /**
                     * 设置ES log rotation interval
                     * @param _rotationInterval ES log rotation interval
                     * 
                     */
                    void SetRotationInterval(const std::string& _rotationInterval);

                    /**
                     * 判断参数 RotationInterval 是否已赋值
                     * @return RotationInterval 是否已赋值
                     * 
                     */
                    bool RotationIntervalHasBeenSet() const;

                    /**
                     * 获取DTS event configuration
                     * @return OutputMode DTS event configuration
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置DTS event configuration
                     * @param _outputMode DTS event configuration
                     * 
                     */
                    void SetOutputMode(const std::string& _outputMode);

                    /**
                     * 判断参数 OutputMode 是否已赋值
                     * @return OutputMode 是否已赋值
                     * 
                     */
                    bool OutputModeHasBeenSet() const;

                    /**
                     * 获取DTS indexing configuration
                     * @return IndexSuffixMode DTS indexing configuration
                     * 
                     */
                    std::string GetIndexSuffixMode() const;

                    /**
                     * 设置DTS indexing configuration
                     * @param _indexSuffixMode DTS indexing configuration
                     * 
                     */
                    void SetIndexSuffixMode(const std::string& _indexSuffixMode);

                    /**
                     * 判断参数 IndexSuffixMode 是否已赋值
                     * @return IndexSuffixMode 是否已赋值
                     * 
                     */
                    bool IndexSuffixModeHasBeenSet() const;

                    /**
                     * 获取ES template type
                     * @return IndexTemplateType ES template type
                     * 
                     */
                    std::string GetIndexTemplateType() const;

                    /**
                     * 设置ES template type
                     * @param _indexTemplateType ES template type
                     * 
                     */
                    void SetIndexTemplateType(const std::string& _indexTemplateType);

                    /**
                     * 判断参数 IndexTemplateType 是否已赋值
                     * @return IndexTemplateType 是否已赋值
                     * 
                     */
                    bool IndexTemplateTypeHasBeenSet() const;

                private:

                    /**
                     * Network connection type
                     */
                    std::string m_netMode;
                    bool m_netModeHasBeenSet;

                    /**
                     * Index prefix
                     */
                    std::string m_indexPrefix;
                    bool m_indexPrefixHasBeenSet;

                    /**
                     * ES log rotation interval
                     */
                    std::string m_rotationInterval;
                    bool m_rotationIntervalHasBeenSet;

                    /**
                     * DTS event configuration
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * DTS indexing configuration
                     */
                    std::string m_indexSuffixMode;
                    bool m_indexSuffixModeHasBeenSet;

                    /**
                     * ES template type
                     */
                    std::string m_indexTemplateType;
                    bool m_indexTemplateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_ESTARGETPARAMS_H_
