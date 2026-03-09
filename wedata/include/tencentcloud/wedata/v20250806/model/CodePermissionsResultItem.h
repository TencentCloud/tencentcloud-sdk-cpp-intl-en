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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEPERMISSIONSRESULTITEM_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEPERMISSIONSRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * File authorization result for data exploration.
                */
                class CodePermissionsResultItem : public AbstractModel
                {
                public:
                    CodePermissionsResultItem();
                    ~CodePermissionsResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Item Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _item Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the operation is successful for the resource permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Result Whether the operation is successful for the resource permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置Whether the operation is successful for the resource permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _result Whether the operation is successful for the resource permission.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason Specify the reason for the failure in the case of creation failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Specify the reason for the failure in the case of creation failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason Specify the reason for the failure in the case of creation failure.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * Whether the operation is successful for the resource permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Specify the reason for the failure in the case of creation failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEPERMISSIONSRESULTITEM_H_
