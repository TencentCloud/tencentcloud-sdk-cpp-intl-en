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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Live recording information
                */
                class LiveRecordInfo : public AbstractModel
                {
                public:
                    LiveRecordInfo();
                    ~LiveRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Live streaming Recording domain name</p>
                     * @return Domain <p>Live streaming Recording domain name</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Live streaming Recording domain name</p>
                     * @param _domain <p>Live streaming Recording domain name</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Live streaming Recording Path</p>
                     * @return Path <p>Live streaming Recording Path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Live streaming Recording Path</p>
                     * @param _path <p>Live streaming Recording Path</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Live recording stream ID.</p>
                     * @return StreamId <p>Live recording stream ID.</p>
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置<p>Live recording stream ID.</p>
                     * @param _streamId <p>Live recording stream ID.</p>
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取<p>Recording start time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO datetime format</a>.</p>
                     * @return RecordStartTime <p>Recording start time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO datetime format</a>.</p>
                     * 
                     */
                    std::string GetRecordStartTime() const;

                    /**
                     * 设置<p>Recording start time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO datetime format</a>.</p>
                     * @param _recordStartTime <p>Recording start time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO datetime format</a>.</p>
                     * 
                     */
                    void SetRecordStartTime(const std::string& _recordStartTime);

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     * 
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Recording end time, using <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return RecordEndTime <p>Recording end time, using <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetRecordEndTime() const;

                    /**
                     * 设置<p>Recording end time, using <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _recordEndTime <p>Recording end time, using <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetRecordEndTime(const std::string& _recordEndTime);

                    /**
                     * 判断参数 RecordEndTime 是否已赋值
                     * @return RecordEndTime 是否已赋值
                     * 
                     */
                    bool RecordEndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Live streaming Recording domain name</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Live streaming Recording Path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Live recording stream ID.</p>
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * <p>Recording start time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO datetime format</a>.</p>
                     */
                    std::string m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * <p>Recording end time, using <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_recordEndTime;
                    bool m_recordEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVERECORDINFO_H_
