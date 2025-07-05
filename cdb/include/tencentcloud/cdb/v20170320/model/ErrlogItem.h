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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ERRLOGITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ERRLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Structured error log details
                */
                class ErrlogItem : public AbstractModel
                {
                public:
                    ErrlogItem();
                    ~ErrlogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error occurrence time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Timestamp Error occurrence time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Error occurrence time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _timestamp Error occurrence time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Error details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Content Error details
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Error details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _content Error details
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Error occurrence time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Error details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ERRLOGITEM_H_
