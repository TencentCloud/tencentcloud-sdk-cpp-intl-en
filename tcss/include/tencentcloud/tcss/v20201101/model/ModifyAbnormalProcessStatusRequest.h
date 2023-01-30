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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYABNORMALPROCESSSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYABNORMALPROCESSSTATUSREQUEST_H_

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
                * ModifyAbnormalProcessStatus request structure.
                */
                class ModifyAbnormalProcessStatusRequest : public AbstractModel
                {
                public:
                    ModifyAbnormalProcessStatusRequest();
                    ~ModifyAbnormalProcessStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of event IDs
                     * @return EventIdSet List of event IDs
                     */
                    std::vector<std::string> GetEventIdSet() const;

                    /**
                     * 设置List of event IDs
                     * @param EventIdSet List of event IDs
                     */
                    void SetEventIdSet(const std::vector<std::string>& _eventIdSet);

                    /**
                     * 判断参数 EventIdSet 是否已赋值
                     * @return EventIdSet 是否已赋值
                     */
                    bool EventIdSetHasBeenSet() const;

                    /**
                     * 获取Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
     `EVENT_DEL`: Deleted.
     `EVENT_ADD_WHITE`: Allowed.
                     * @return Status Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
     `EVENT_DEL`: Deleted.
     `EVENT_ADD_WHITE`: Allowed.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
     `EVENT_DEL`: Deleted.
     `EVENT_ADD_WHITE`: Allowed.
                     * @param Status Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
     `EVENT_DEL`: Deleted.
     `EVENT_ADD_WHITE`: Allowed.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Event remarks
                     * @return Remark Event remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Event remarks
                     * @param Remark Event remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * List of event IDs
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                    /**
                     * Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
     `EVENT_DEL`: Deleted.
     `EVENT_ADD_WHITE`: Allowed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYABNORMALPROCESSSTATUSREQUEST_H_
