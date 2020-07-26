/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_REALTIMEDATA_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_REALTIMEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TimeValue.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Returned data of seconds-level monitoring
                */
                class RealtimeData : public AbstractModel
                {
                public:
                    RealtimeData();
                    ~RealtimeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Returned data
                     * @return Content Returned data
                     */
                    std::vector<TimeValue> GetContent() const;

                    /**
                     * 设置Returned data
                     * @param Content Returned data
                     */
                    void SetContent(const std::vector<TimeValue>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Data type field
                     * @return DataType Data type field
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置Data type field
                     * @param DataType Data type field
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * Returned data
                     */
                    std::vector<TimeValue> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Data type field
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_REALTIMEDATA_H_
