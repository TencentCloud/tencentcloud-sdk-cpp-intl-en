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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEINPUTREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEINPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/InputSettingInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateStreamLiveInput request structure.
                */
                class CreateStreamLiveInputRequest : public AbstractModel
                {
                public:
                    CreateStreamLiveInputRequest();
                    ~CreateStreamLiveInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @return Name Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @param _name Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Input type
Valid values: `RTMP_PUSH`, `RTP_PUSH`, `UDP_PUSH`, `RTMP_PULL`, `HLS_PULL`, `MP4_PULL`,`RTP-FEC_PUSH`,`RTSP_PULL`,`SRT_PUSH `,`SRT_PULL `
                     * @return Type Input type
Valid values: `RTMP_PUSH`, `RTP_PUSH`, `UDP_PUSH`, `RTMP_PULL`, `HLS_PULL`, `MP4_PULL`,`RTP-FEC_PUSH`,`RTSP_PULL`,`SRT_PUSH `,`SRT_PULL `
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input type
Valid values: `RTMP_PUSH`, `RTP_PUSH`, `UDP_PUSH`, `RTMP_PULL`, `HLS_PULL`, `MP4_PULL`,`RTP-FEC_PUSH`,`RTSP_PULL`,`SRT_PUSH `,`SRT_PULL `
                     * @param _type Input type
Valid values: `RTMP_PUSH`, `RTP_PUSH`, `UDP_PUSH`, `RTMP_PULL`, `HLS_PULL`, `MP4_PULL`,`RTP-FEC_PUSH`,`RTSP_PULL`,`SRT_PUSH `,`SRT_PULL `
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ID of the input security group to attach
You can attach only one security group to an input.
                     * @return SecurityGroupIds ID of the input security group to attach
You can attach only one security group to an input.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置ID of the input security group to attach
You can attach only one security group to an input.
                     * @param _securityGroupIds ID of the input security group to attach
You can attach only one security group to an input.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
                     * @return InputSettings Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
                     * 
                     */
                    std::vector<InputSettingInfo> GetInputSettings() const;

                    /**
                     * 设置Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
                     * @param _inputSettings Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
                     * 
                     */
                    void SetInputSettings(const std::vector<InputSettingInfo>& _inputSettings);

                    /**
                     * 判断参数 InputSettings 是否已赋值
                     * @return InputSettings 是否已赋值
                     * 
                     */
                    bool InputSettingsHasBeenSet() const;

                private:

                    /**
                     * Input name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Input type
Valid values: `RTMP_PUSH`, `RTP_PUSH`, `UDP_PUSH`, `RTMP_PULL`, `HLS_PULL`, `MP4_PULL`,`RTP-FEC_PUSH`,`RTSP_PULL`,`SRT_PUSH `,`SRT_PULL `
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ID of the input security group to attach
You can attach only one security group to an input.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Input settings. 
For the type:
`RTMP_PUSH`, `RTMP_PULL`, `HLS_PULL`,`RTSP_PULL`,`SRT_PULL` or `MP4_PULL`, 1 or 2 inputs of the corresponding type can be configured.
For the type:
`SRT_PUSH`, 0 or 2 inputs of the corresponding type can be configured.
                     */
                    std::vector<InputSettingInfo> m_inputSettings;
                    bool m_inputSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVEINPUTREQUEST_H_
