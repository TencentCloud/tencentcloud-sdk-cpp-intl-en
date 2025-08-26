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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/HLSConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/MP4ConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateLiveRecordTemplate request structure.
                */
                class CreateLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveRecordTemplateRequest();
                    ~CreateLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取HLS configuration parameter. Either this parameter or MP4Configure should be specified.
                     * @return HLSConfigure HLS configuration parameter. Either this parameter or MP4Configure should be specified.
                     * 
                     */
                    HLSConfigureInfo GetHLSConfigure() const;

                    /**
                     * 设置HLS configuration parameter. Either this parameter or MP4Configure should be specified.
                     * @param _hLSConfigure HLS configuration parameter. Either this parameter or MP4Configure should be specified.
                     * 
                     */
                    void SetHLSConfigure(const HLSConfigureInfo& _hLSConfigure);

                    /**
                     * 判断参数 HLSConfigure 是否已赋值
                     * @return HLSConfigure 是否已赋值
                     * 
                     */
                    bool HLSConfigureHasBeenSet() const;

                    /**
                     * 获取MP4 configuration parameter. Either this parameter or HLSConfigure should be specified.
                     * @return MP4Configure MP4 configuration parameter. Either this parameter or HLSConfigure should be specified.
                     * 
                     */
                    MP4ConfigureInfo GetMP4Configure() const;

                    /**
                     * 设置MP4 configuration parameter. Either this parameter or HLSConfigure should be specified.
                     * @param _mP4Configure MP4 configuration parameter. Either this parameter or HLSConfigure should be specified.
                     * 
                     */
                    void SetMP4Configure(const MP4ConfigureInfo& _mP4Configure);

                    /**
                     * 判断参数 MP4Configure 是否已赋值
                     * @return MP4Configure 是否已赋值
                     * 
                     */
                    bool MP4ConfigureHasBeenSet() const;

                    /**
                     * 获取Recording template name. Length limit: 64 characters.
                     * @return Name Recording template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Recording template name. Length limit: 64 characters.
                     * @param _name Recording template name. Length limit: 64 characters.
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
                     * 获取Template description, with a length limit of 256 characters.
                     * @return Comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters.
                     * @param _comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Recording type. Valid values: video: audio and video recording; audio: audio recording; auto: automatic detection. If it is left blank, the default value video is used.
                     * @return RecordType Recording type. Valid values: video: audio and video recording; audio: audio recording; auto: automatic detection. If it is left blank, the default value video is used.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置Recording type. Valid values: video: audio and video recording; audio: audio recording; auto: automatic detection. If it is left blank, the default value video is used.
                     * @param _recordType Recording type. Valid values: video: audio and video recording; audio: audio recording; auto: automatic detection. If it is left blank, the default value video is used.
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                private:

                    /**
                     * HLS configuration parameter. Either this parameter or MP4Configure should be specified.
                     */
                    HLSConfigureInfo m_hLSConfigure;
                    bool m_hLSConfigureHasBeenSet;

                    /**
                     * MP4 configuration parameter. Either this parameter or HLSConfigure should be specified.
                     */
                    MP4ConfigureInfo m_mP4Configure;
                    bool m_mP4ConfigureHasBeenSet;

                    /**
                     * Recording template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Recording type. Valid values: video: audio and video recording; audio: audio recording; auto: automatic detection. If it is left blank, the default value video is used.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
