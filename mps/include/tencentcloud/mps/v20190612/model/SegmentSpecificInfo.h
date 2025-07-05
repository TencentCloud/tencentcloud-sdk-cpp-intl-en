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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTSPECIFICINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTSPECIFICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Information on special segment configuration.
                */
                class SegmentSpecificInfo : public AbstractModel
                {
                public:
                    SegmentSpecificInfo();
                    ~SegmentSpecificInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch for segment duration at startup. Optional values:
on: Turn on the switch
off: Turn off the switch
Default value: off
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Switch Switch for segment duration at startup. Optional values:
on: Turn on the switch
off: Turn off the switch
Default value: off
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch for segment duration at startup. Optional values:
on: Turn on the switch
off: Turn off the switch
Default value: off
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _switch Switch for segment duration at startup. Optional values:
on: Turn on the switch
off: Turn off the switch
Default value: off
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Segment duration at startup. Unit: second
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FragmentTime Segment duration at startup. Unit: second
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetFragmentTime() const;

                    /**
                     * 设置Segment duration at startup. Unit: second
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fragmentTime Segment duration at startup. Unit: second
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFragmentTime(const int64_t& _fragmentTime);

                    /**
                     * 判断参数 FragmentTime 是否已赋值
                     * @return FragmentTime 是否已赋值
                     * 
                     */
                    bool FragmentTimeHasBeenSet() const;

                    /**
                     * 获取Number of effective segments, indicating the first FragmentEndNum segments with FragmentTime. Value range: >=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FragmentEndNum Number of effective segments, indicating the first FragmentEndNum segments with FragmentTime. Value range: >=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetFragmentEndNum() const;

                    /**
                     * 设置Number of effective segments, indicating the first FragmentEndNum segments with FragmentTime. Value range: >=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fragmentEndNum Number of effective segments, indicating the first FragmentEndNum segments with FragmentTime. Value range: >=1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFragmentEndNum(const int64_t& _fragmentEndNum);

                    /**
                     * 判断参数 FragmentEndNum 是否已赋值
                     * @return FragmentEndNum 是否已赋值
                     * 
                     */
                    bool FragmentEndNumHasBeenSet() const;

                private:

                    /**
                     * Switch for segment duration at startup. Optional values:
on: Turn on the switch
off: Turn off the switch
Default value: off
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Segment duration at startup. Unit: second
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_fragmentTime;
                    bool m_fragmentTimeHasBeenSet;

                    /**
                     * Number of effective segments, indicating the first FragmentEndNum segments with FragmentTime. Value range: >=1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_fragmentEndNum;
                    bool m_fragmentEndNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTSPECIFICINFO_H_
