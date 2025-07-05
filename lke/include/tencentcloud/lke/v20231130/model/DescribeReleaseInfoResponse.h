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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBERELEASEINFORESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBERELEASEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeReleaseInfo response structure.
                */
                class DescribeReleaseInfoResponse : public AbstractModel
                {
                public:
                    DescribeReleaseInfoResponse();
                    ~DescribeReleaseInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The last release time.
                     * @return LastTime The last release time.
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Release status: 1: pending release; 2: releasing; 3: release successful; 4: release failed; 5: under review; 6: review successful; 7: review failed; 8: release successful, callback processing; 9: release paused; 10: appeal under review; 11: appeal approved; 12: appeal rejected.
                     * @return Status Release status: 1: pending release; 2: releasing; 3: release successful; 4: release failed; 5: under review; 6: review successful; 7: review failed; 8: release successful, callback processing; 9: release paused; 10: appeal under review; 11: appeal approved; 12: appeal rejected.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether it has been edited. When it is true, it means it can be released.
                     * @return IsUpdated Whether it has been edited. When it is true, it means it can be released.
                     * 
                     */
                    bool GetIsUpdated() const;

                    /**
                     * 判断参数 IsUpdated 是否已赋值
                     * @return IsUpdated 是否已赋值
                     * 
                     */
                    bool IsUpdatedHasBeenSet() const;

                    /**
                     * 获取Reason for failure.

                     * @return Msg Reason for failure.

                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * The last release time.
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Release status: 1: pending release; 2: releasing; 3: release successful; 4: release failed; 5: under review; 6: review successful; 7: review failed; 8: release successful, callback processing; 9: release paused; 10: appeal under review; 11: appeal approved; 12: appeal rejected.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether it has been edited. When it is true, it means it can be released.
                     */
                    bool m_isUpdated;
                    bool m_isUpdatedHasBeenSet;

                    /**
                     * Reason for failure.

                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBERELEASEINFORESPONSE_H_
