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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATERECORDTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATERECORDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateRecordTask request structure.
                */
                class CreateRecordTaskRequest : public AbstractModel
                {
                public:
                    CreateRecordTaskRequest();
                    ~CreateRecordTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param StreamName Stream name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return DomainName Push domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name.
                     * @param DomainName Push domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Push path.
                     * @return AppName Push path.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path.
                     * @param AppName Push path.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Recording end time in UNIX timestamp format. `EndTime` should be later than `StartTime` and the current time, and the duration between `EndTime` and `StartTime` is up to 24 hours.
                     * @return EndTime Recording end time in UNIX timestamp format. `EndTime` should be later than `StartTime` and the current time, and the duration between `EndTime` and `StartTime` is up to 24 hours.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Recording end time in UNIX timestamp format. `EndTime` should be later than `StartTime` and the current time, and the duration between `EndTime` and `StartTime` is up to 24 hours.
                     * @param EndTime Recording end time in UNIX timestamp format. `EndTime` should be later than `StartTime` and the current time, and the duration between `EndTime` and `StartTime` is up to 24 hours.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Recording start time in UNIX timestamp format. Leaving this parameter empty means starting recording now. `StartTime` cannot be later than the current time plus 6 days.
                     * @return StartTime Recording start time in UNIX timestamp format. Leaving this parameter empty means starting recording now. `StartTime` cannot be later than the current time plus 6 days.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Recording start time in UNIX timestamp format. Leaving this parameter empty means starting recording now. `StartTime` cannot be later than the current time plus 6 days.
                     * @param StartTime Recording start time in UNIX timestamp format. Leaving this parameter empty means starting recording now. `StartTime` cannot be later than the current time plus 6 days.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Push type. Default value: 0. Valid values:
0: LVB push.
1: mixed stream, i.e., A + B = C mixed stream.
                     * @return StreamType Push type. Default value: 0. Valid values:
0: LVB push.
1: mixed stream, i.e., A + B = C mixed stream.
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置Push type. Default value: 0. Valid values:
0: LVB push.
1: mixed stream, i.e., A + B = C mixed stream.
                     * @param StreamType Push type. Default value: 0. Valid values:
0: LVB push.
1: mixed stream, i.e., A + B = C mixed stream.
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Recording template ID, which is the returned value of `CreateLiveRecordTemplate`. If this parameter is left empty or incorrect, the stream will be recorded in HLS format and retained permanently by default.
                     * @return TemplateId Recording template ID, which is the returned value of `CreateLiveRecordTemplate`. If this parameter is left empty or incorrect, the stream will be recorded in HLS format and retained permanently by default.
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置Recording template ID, which is the returned value of `CreateLiveRecordTemplate`. If this parameter is left empty or incorrect, the stream will be recorded in HLS format and retained permanently by default.
                     * @param TemplateId Recording template ID, which is the returned value of `CreateLiveRecordTemplate`. If this parameter is left empty or incorrect, the stream will be recorded in HLS format and retained permanently by default.
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Extension field which is not defined now. It is empty by default.
                     * @return Extension Extension field which is not defined now. It is empty by default.
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置Extension field which is not defined now. It is empty by default.
                     * @param Extension Extension field which is not defined now. It is empty by default.
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Recording end time in UNIX timestamp format. `EndTime` should be later than `StartTime` and the current time, and the duration between `EndTime` and `StartTime` is up to 24 hours.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Recording start time in UNIX timestamp format. Leaving this parameter empty means starting recording now. `StartTime` cannot be later than the current time plus 6 days.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Push type. Default value: 0. Valid values:
0: LVB push.
1: mixed stream, i.e., A + B = C mixed stream.
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Recording template ID, which is the returned value of `CreateLiveRecordTemplate`. If this parameter is left empty or incorrect, the stream will be recorded in HLS format and retained permanently by default.
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Extension field which is not defined now. It is empty by default.
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATERECORDTASKREQUEST_H_
