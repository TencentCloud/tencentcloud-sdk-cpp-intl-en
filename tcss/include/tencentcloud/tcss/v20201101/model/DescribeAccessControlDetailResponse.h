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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEACCESSCONTROLDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEACCESSCONTROLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeEventBaseInfo.h>
#include <tencentcloud/tcss/v20201101/model/ProcessDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/FileAttributeInfo.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlEventDescription.h>
#include <tencentcloud/tcss/v20201101/model/ProcessBaseInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAccessControlDetail response structure.
                */
                class DescribeAccessControlDetailResponse : public AbstractModel
                {
                public:
                    DescribeAccessControlDetailResponse();
                    ~DescribeAccessControlDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Basic information of the event
                     * @return EventBaseInfo Basic information of the event
                     * 
                     */
                    RunTimeEventBaseInfo GetEventBaseInfo() const;

                    /**
                     * 判断参数 EventBaseInfo 是否已赋值
                     * @return EventBaseInfo 是否已赋值
                     * 
                     */
                    bool EventBaseInfoHasBeenSet() const;

                    /**
                     * 获取Process information
                     * @return ProcessInfo Process information
                     * 
                     */
                    ProcessDetailInfo GetProcessInfo() const;

                    /**
                     * 判断参数 ProcessInfo 是否已赋值
                     * @return ProcessInfo 是否已赋值
                     * 
                     */
                    bool ProcessInfoHasBeenSet() const;

                    /**
                     * 获取Information tampered with
                     * @return TamperedFileInfo Information tampered with
                     * 
                     */
                    FileAttributeInfo GetTamperedFileInfo() const;

                    /**
                     * 判断参数 TamperedFileInfo 是否已赋值
                     * @return TamperedFileInfo 是否已赋值
                     * 
                     */
                    bool TamperedFileInfoHasBeenSet() const;

                    /**
                     * 获取Event description
                     * @return EventDetail Event description
                     * 
                     */
                    AccessControlEventDescription GetEventDetail() const;

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     * 
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取Parent process information
                     * @return ParentProcessInfo Parent process information
                     * 
                     */
                    ProcessBaseInfo GetParentProcessInfo() const;

                    /**
                     * 判断参数 ParentProcessInfo 是否已赋值
                     * @return ParentProcessInfo 是否已赋值
                     * 
                     */
                    bool ParentProcessInfoHasBeenSet() const;

                    /**
                     * 获取Ancestor process information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AncestorProcessInfo Ancestor process information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ProcessBaseInfo GetAncestorProcessInfo() const;

                    /**
                     * 判断参数 AncestorProcessInfo 是否已赋值
                     * @return AncestorProcessInfo 是否已赋值
                     * 
                     */
                    bool AncestorProcessInfoHasBeenSet() const;

                private:

                    /**
                     * Basic information of the event
                     */
                    RunTimeEventBaseInfo m_eventBaseInfo;
                    bool m_eventBaseInfoHasBeenSet;

                    /**
                     * Process information
                     */
                    ProcessDetailInfo m_processInfo;
                    bool m_processInfoHasBeenSet;

                    /**
                     * Information tampered with
                     */
                    FileAttributeInfo m_tamperedFileInfo;
                    bool m_tamperedFileInfoHasBeenSet;

                    /**
                     * Event description
                     */
                    AccessControlEventDescription m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * Parent process information
                     */
                    ProcessBaseInfo m_parentProcessInfo;
                    bool m_parentProcessInfoHasBeenSet;

                    /**
                     * Ancestor process information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ProcessBaseInfo m_ancestorProcessInfo;
                    bool m_ancestorProcessInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEACCESSCONTROLDETAILRESPONSE_H_
