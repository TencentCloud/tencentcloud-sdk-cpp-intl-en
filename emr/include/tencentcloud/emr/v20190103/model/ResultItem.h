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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESULTITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESULTITEM_H_

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
                * Output results of user groups.
                */
                class ResultItem : public AbstractModel
                {
                public:
                    ResultItem();
                    ~ResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User group name.
                     * @return Item User group name.
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置User group name.
                     * @param _item User group name.
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取Whether the user group is created successfully.
                     * @return Result Whether the user group is created successfully.
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置Whether the user group is created successfully.
                     * @param _result Whether the user group is created successfully.
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Specify the reason for the failure in the case of creation failure.
                     * @return Reason Specify the reason for the failure in the case of creation failure.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Specify the reason for the failure in the case of creation failure.
                     * @param _reason Specify the reason for the failure in the case of creation failure.
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
                     * User group name.
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * Whether the user group is created successfully.
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Specify the reason for the failure in the case of creation failure.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESULTITEM_H_
