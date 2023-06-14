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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TARGETS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Number of scrape targets
                */
                class Targets : public AbstractModel
                {
                public:
                    Targets();
                    ~Targets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The total count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total The total count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置The total count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _total The total count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of online targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Up Number of online targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置Number of online targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _up Number of online targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

                    /**
                     * 获取Number of offline targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Down Number of offline targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDown() const;

                    /**
                     * 设置Number of offline targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _down Number of offline targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDown(const uint64_t& _down);

                    /**
                     * 判断参数 Down 是否已赋值
                     * @return Down 是否已赋值
                     * 
                     */
                    bool DownHasBeenSet() const;

                    /**
                     * 获取Number of unknown status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Unknown Number of unknown status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUnknown() const;

                    /**
                     * 设置Number of unknown status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unknown Number of unknown status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnknown(const uint64_t& _unknown);

                    /**
                     * 判断参数 Unknown 是否已赋值
                     * @return Unknown 是否已赋值
                     * 
                     */
                    bool UnknownHasBeenSet() const;

                private:

                    /**
                     * The total count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of online targets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * Number of offline targets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_down;
                    bool m_downHasBeenSet;

                    /**
                     * Number of unknown status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_unknown;
                    bool m_unknownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TARGETS_H_
