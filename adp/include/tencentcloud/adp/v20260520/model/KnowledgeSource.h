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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGESOURCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Knowledge source information
                */
                class KnowledgeSource : public AbstractModel
                {
                public:
                    KnowledgeSource();
                    ~KnowledgeSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether it is big data</p>
                     * @return IsBigData <p>Whether it is big data</p>
                     * 
                     */
                    bool GetIsBigData() const;

                    /**
                     * 设置<p>Whether it is big data</p>
                     * @param _isBigData <p>Whether it is big data</p>
                     * 
                     */
                    void SetIsBigData(const bool& _isBigData);

                    /**
                     * 判断参数 IsBigData 是否已赋值
                     * @return IsBigData 是否已赋值
                     * 
                     */
                    bool IsBigDataHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a shared knowledge base</p>
                     * @return IsShared <p>Whether it is a shared knowledge base</p>
                     * 
                     */
                    bool GetIsShared() const;

                    /**
                     * 设置<p>Whether it is a shared knowledge base</p>
                     * @param _isShared <p>Whether it is a shared knowledge base</p>
                     * 
                     */
                    void SetIsShared(const bool& _isShared);

                    /**
                     * 判断参数 IsShared 是否已赋值
                     * @return IsShared 是否已赋值
                     * 
                     */
                    bool IsSharedHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base name</p>
                     * @return KbName <p>Knowledge base name</p>
                     * 
                     */
                    std::string GetKbName() const;

                    /**
                     * 设置<p>Knowledge base name</p>
                     * @param _kbName <p>Knowledge base name</p>
                     * 
                     */
                    void SetKbName(const std::string& _kbName);

                    /**
                     * 判断参数 KbName 是否已赋值
                     * @return KbName 是否已赋值
                     * 
                     */
                    bool KbNameHasBeenSet() const;

                private:

                    /**
                     * <p>Whether it is big data</p>
                     */
                    bool m_isBigData;
                    bool m_isBigDataHasBeenSet;

                    /**
                     * <p>Whether it is a shared knowledge base</p>
                     */
                    bool m_isShared;
                    bool m_isSharedHasBeenSet;

                    /**
                     * <p>Knowledge base name</p>
                     */
                    std::string m_kbName;
                    bool m_kbNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGESOURCE_H_
