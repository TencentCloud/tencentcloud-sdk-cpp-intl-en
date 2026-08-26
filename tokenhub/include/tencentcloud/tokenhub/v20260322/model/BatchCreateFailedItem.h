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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BATCHCREATEFAILEDITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BATCHCREATEFAILEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Batch create failed items
                */
                class BatchCreateFailedItem : public AbstractModel
                {
                public:
                    BatchCreateFailedItem();
                    ~BatchCreateFailedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Serial number of the failed item (starting from 1, corresponding to the suffix number).
                     * @return Index Serial number of the failed item (starting from 1, corresponding to the suffix number).
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Serial number of the failed item (starting from 1, corresponding to the suffix number).
                     * @param _index Serial number of the failed item (starting from 1, corresponding to the suffix number).
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Name of the failed item.
                     * @return Name Name of the failed item.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the failed item.
                     * @param _name Name of the failed item.
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
                     * 获取Failure reason.
                     * @return Reason Failure reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Failure reason.
                     * @param _reason Failure reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Serial number of the failed item (starting from 1, corresponding to the suffix number).
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Name of the failed item.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Failure reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BATCHCREATEFAILEDITEM_H_
