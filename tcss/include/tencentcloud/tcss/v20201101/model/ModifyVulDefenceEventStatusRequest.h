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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCEEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCEEVENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyVulDefenceEventStatus request structure.
                */
                class ModifyVulDefenceEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyVulDefenceEventStatusRequest();
                    ~ModifyVulDefenceEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of event IDs
                     * @return EventIDs Array of event IDs
                     * 
                     */
                    std::vector<int64_t> GetEventIDs() const;

                    /**
                     * 设置Array of event IDs
                     * @param _eventIDs Array of event IDs
                     * 
                     */
                    void SetEventIDs(const std::vector<int64_t>& _eventIDs);

                    /**
                     * 判断参数 EventIDs 是否已赋值
                     * @return EventIDs 是否已赋值
                     * 
                     */
                    bool EventIDsHasBeenSet() const;

                    /**
                     * 获取Operation status:
Valid values: `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignore); `EVENT_ISOLATE_CONTAINER` (isolate the container); `EVENT_DEL` (delete).
                     * @return Status Operation status:
Valid values: `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignore); `EVENT_ISOLATE_CONTAINER` (isolate the container); `EVENT_DEL` (delete).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Operation status:
Valid values: `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignore); `EVENT_ISOLATE_CONTAINER` (isolate the container); `EVENT_DEL` (delete).
                     * @param _status Operation status:
Valid values: `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignore); `EVENT_ISOLATE_CONTAINER` (isolate the container); `EVENT_DEL` (delete).
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Array of event IDs
                     */
                    std::vector<int64_t> m_eventIDs;
                    bool m_eventIDsHasBeenSet;

                    /**
                     * Operation status:
Valid values: `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignore); `EVENT_ISOLATE_CONTAINER` (isolate the container); `EVENT_DEL` (delete).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCEEVENTSTATUSREQUEST_H_
