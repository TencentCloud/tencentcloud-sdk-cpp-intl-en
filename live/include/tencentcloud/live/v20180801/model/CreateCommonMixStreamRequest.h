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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECOMMONMIXSTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECOMMONMIXSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CommonMixInputParam.h>
#include <tencentcloud/live/v20180801/model/CommonMixOutputParams.h>
#include <tencentcloud/live/v20180801/model/CommonMixControlParams.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateCommonMixStream request structure.
                */
                class CreateCommonMixStreamRequest : public AbstractModel
                {
                public:
                    CreateCommonMixStreamRequest();
                    ~CreateCommonMixStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of a stream mix session (from applying for the stream mix to cancelling it). This parameter can contain up to 80 bytes of letters, digits, and underscores.
                     * @return MixStreamSessionId ID of a stream mix session (from applying for the stream mix to cancelling it). This parameter can contain up to 80 bytes of letters, digits, and underscores.
                     * 
                     */
                    std::string GetMixStreamSessionId() const;

                    /**
                     * 设置ID of a stream mix session (from applying for the stream mix to cancelling it). This parameter can contain up to 80 bytes of letters, digits, and underscores.
                     * @param _mixStreamSessionId ID of a stream mix session (from applying for the stream mix to cancelling it). This parameter can contain up to 80 bytes of letters, digits, and underscores.
                     * 
                     */
                    void SetMixStreamSessionId(const std::string& _mixStreamSessionId);

                    /**
                     * 判断参数 MixStreamSessionId 是否已赋值
                     * @return MixStreamSessionId 是否已赋值
                     * 
                     */
                    bool MixStreamSessionIdHasBeenSet() const;

                    /**
                     * 获取Input stream list for stream mix.
                     * @return InputStreamList Input stream list for stream mix.
                     * 
                     */
                    std::vector<CommonMixInputParam> GetInputStreamList() const;

                    /**
                     * 设置Input stream list for stream mix.
                     * @param _inputStreamList Input stream list for stream mix.
                     * 
                     */
                    void SetInputStreamList(const std::vector<CommonMixInputParam>& _inputStreamList);

                    /**
                     * 判断参数 InputStreamList 是否已赋值
                     * @return InputStreamList 是否已赋值
                     * 
                     */
                    bool InputStreamListHasBeenSet() const;

                    /**
                     * 获取Output stream parameter for stream mix.
                     * @return OutputParams Output stream parameter for stream mix.
                     * 
                     */
                    CommonMixOutputParams GetOutputParams() const;

                    /**
                     * 设置Output stream parameter for stream mix.
                     * @param _outputParams Output stream parameter for stream mix.
                     * 
                     */
                    void SetOutputParams(const CommonMixOutputParams& _outputParams);

                    /**
                     * 判断参数 OutputParams 是否已赋值
                     * @return OutputParams 是否已赋值
                     * 
                     */
                    bool OutputParamsHasBeenSet() const;

                    /**
                     * 获取Input template ID. If this parameter is set, the output will be generated according to the default template layout, and there is no need to enter the custom position parameters.
If this parameter is left empty, 0 will be used by default.
For two input sources, 10, 20, 30, 40, and 50 are supported.
For three input sources, 310, 390, and 391 are supported.
For four input sources, 410 is supported.
For five input sources, 510 and 590 are supported.
For six input sources, 610 is supported.
                     * @return MixStreamTemplateId Input template ID. If this parameter is set, the output will be generated according to the default template layout, and there is no need to enter the custom position parameters.
If this parameter is left empty, 0 will be used by default.
For two input sources, 10, 20, 30, 40, and 50 are supported.
For three input sources, 310, 390, and 391 are supported.
For four input sources, 410 is supported.
For five input sources, 510 and 590 are supported.
For six input sources, 610 is supported.
                     * 
                     */
                    int64_t GetMixStreamTemplateId() const;

                    /**
                     * 设置Input template ID. If this parameter is set, the output will be generated according to the default template layout, and there is no need to enter the custom position parameters.
If this parameter is left empty, 0 will be used by default.
For two input sources, 10, 20, 30, 40, and 50 are supported.
For three input sources, 310, 390, and 391 are supported.
For four input sources, 410 is supported.
For five input sources, 510 and 590 are supported.
For six input sources, 610 is supported.
                     * @param _mixStreamTemplateId Input template ID. If this parameter is set, the output will be generated according to the default template layout, and there is no need to enter the custom position parameters.
If this parameter is left empty, 0 will be used by default.
For two input sources, 10, 20, 30, 40, and 50 are supported.
For three input sources, 310, 390, and 391 are supported.
For four input sources, 410 is supported.
For five input sources, 510 and 590 are supported.
For six input sources, 610 is supported.
                     * 
                     */
                    void SetMixStreamTemplateId(const int64_t& _mixStreamTemplateId);

                    /**
                     * 判断参数 MixStreamTemplateId 是否已赋值
                     * @return MixStreamTemplateId 是否已赋值
                     * 
                     */
                    bool MixStreamTemplateIdHasBeenSet() const;

                    /**
                     * 获取Special control parameter for stream mix. If there are no special needs, leave it empty.
                     * @return ControlParams Special control parameter for stream mix. If there are no special needs, leave it empty.
                     * 
                     */
                    CommonMixControlParams GetControlParams() const;

                    /**
                     * 设置Special control parameter for stream mix. If there are no special needs, leave it empty.
                     * @param _controlParams Special control parameter for stream mix. If there are no special needs, leave it empty.
                     * 
                     */
                    void SetControlParams(const CommonMixControlParams& _controlParams);

                    /**
                     * 判断参数 ControlParams 是否已赋值
                     * @return ControlParams 是否已赋值
                     * 
                     */
                    bool ControlParamsHasBeenSet() const;

                private:

                    /**
                     * ID of a stream mix session (from applying for the stream mix to cancelling it). This parameter can contain up to 80 bytes of letters, digits, and underscores.
                     */
                    std::string m_mixStreamSessionId;
                    bool m_mixStreamSessionIdHasBeenSet;

                    /**
                     * Input stream list for stream mix.
                     */
                    std::vector<CommonMixInputParam> m_inputStreamList;
                    bool m_inputStreamListHasBeenSet;

                    /**
                     * Output stream parameter for stream mix.
                     */
                    CommonMixOutputParams m_outputParams;
                    bool m_outputParamsHasBeenSet;

                    /**
                     * Input template ID. If this parameter is set, the output will be generated according to the default template layout, and there is no need to enter the custom position parameters.
If this parameter is left empty, 0 will be used by default.
For two input sources, 10, 20, 30, 40, and 50 are supported.
For three input sources, 310, 390, and 391 are supported.
For four input sources, 410 is supported.
For five input sources, 510 and 590 are supported.
For six input sources, 610 is supported.
                     */
                    int64_t m_mixStreamTemplateId;
                    bool m_mixStreamTemplateIdHasBeenSet;

                    /**
                     * Special control parameter for stream mix. If there are no special needs, leave it empty.
                     */
                    CommonMixControlParams m_controlParams;
                    bool m_controlParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECOMMONMIXSTREAMREQUEST_H_
