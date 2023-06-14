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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CDNIPHISTORY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CDNIPHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CDN node activation and deactivation history
                */
                class CdnIpHistory : public AbstractModel
                {
                public:
                    CdnIpHistory();
                    ~CdnIpHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type
`online`: Nodes activated
`offline`: Nodes deactivated
                     * @return Status Operation type
`online`: Nodes activated
`offline`: Nodes deactivated
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Operation type
`online`: Nodes activated
`offline`: Nodes deactivated
                     * @param _status Operation type
`online`: Nodes activated
`offline`: Nodes deactivated
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Operation time corresponding to operation type
If its value is `null`, it means there is no status change record.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Datetime Operation time corresponding to operation type
If its value is `null`, it means there is no status change record.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatetime() const;

                    /**
                     * 设置Operation time corresponding to operation type
If its value is `null`, it means there is no status change record.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _datetime Operation time corresponding to operation type
If its value is `null`, it means there is no status change record.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatetime(const std::string& _datetime);

                    /**
                     * 判断参数 Datetime 是否已赋值
                     * @return Datetime 是否已赋值
                     * 
                     */
                    bool DatetimeHasBeenSet() const;

                private:

                    /**
                     * Operation type
`online`: Nodes activated
`offline`: Nodes deactivated
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Operation time corresponding to operation type
If its value is `null`, it means there is no status change record.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_datetime;
                    bool m_datetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CDNIPHISTORY_H_
