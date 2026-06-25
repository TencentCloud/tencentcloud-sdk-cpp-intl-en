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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCAUDIOTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCAUDIOTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioOutputAudioInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcAudioOutputVideoInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAigcAudioTask response structure.
                */
                class DescribeAigcAudioTaskResponse : public AbstractModel
                {
                public:
                    DescribeAigcAudioTaskResponse();
                    ~DescribeAigcAudioTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.Example value: DONE
                     * @return Status Current task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.Example value: DONE
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取When the task status is FAIL, the failure information is returned.
                     * @return Message When the task status is FAIL, the failure information is returned.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Output audio information.
                     * @return AudioInfos Output audio information.
                     * 
                     */
                    std::vector<AigcAudioOutputAudioInfo> GetAudioInfos() const;

                    /**
                     * 判断参数 AudioInfos 是否已赋值
                     * @return AudioInfos 是否已赋值
                     * 
                     */
                    bool AudioInfosHasBeenSet() const;

                    /**
                     * 获取Output video information. Only returned for scenarios such as video dubbing.
                     * @return VideoInfos Output video information. Only returned for scenarios such as video dubbing.
                     * 
                     */
                    std::vector<AigcAudioOutputVideoInfo> GetVideoInfos() const;

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                private:

                    /**
                     * Current task status. WAIT: waiting; RUN: running; FAIL: failed; DONE: successful.Example value: DONE
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * When the task status is FAIL, the failure information is returned.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Output audio information.
                     */
                    std::vector<AigcAudioOutputAudioInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * Output video information. Only returned for scenarios such as video dubbing.
                     */
                    std::vector<AigcAudioOutputVideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCAUDIOTASKRESPONSE_H_
