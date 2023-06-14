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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEVIDEOGENERATIONTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEVIDEOGENERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/Concat.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>
#include <tencentcloud/tiw/v20190919/model/RecordControl.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateVideoGenerationTask request structure.
                */
                class CreateVideoGenerationTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoGenerationTaskRequest();
                    ~CreateVideoGenerationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the recording task.
                     * @return OnlineRecordTaskId ID of the recording task.
                     * 
                     */
                    std::string GetOnlineRecordTaskId() const;

                    /**
                     * 设置ID of the recording task.
                     * @param _onlineRecordTaskId ID of the recording task.
                     * 
                     */
                    void SetOnlineRecordTaskId(const std::string& _onlineRecordTaskId);

                    /**
                     * 判断参数 OnlineRecordTaskId 是否已赋值
                     * @return OnlineRecordTaskId 是否已赋值
                     * 
                     */
                    bool OnlineRecordTaskIdHasBeenSet() const;

                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Whiteboard parameters of the recording video generation task, such as the width and height of the whiteboard.

This parameter conflicts with the Whiteboard parameter in the API for starting a recording task. If the two Whiteboard parameters are both specified, the Whiteboard parameter in this API takes priority for recording video generation. If the Whiteboard parameter in this API is not specified, the Whiteboard parameter specified in the API for starting a recording task is used for recording video generation.
                     * @return Whiteboard Whiteboard parameters of the recording video generation task, such as the width and height of the whiteboard.

This parameter conflicts with the Whiteboard parameter in the API for starting a recording task. If the two Whiteboard parameters are both specified, the Whiteboard parameter in this API takes priority for recording video generation. If the Whiteboard parameter in this API is not specified, the Whiteboard parameter specified in the API for starting a recording task is used for recording video generation.
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置Whiteboard parameters of the recording video generation task, such as the width and height of the whiteboard.

This parameter conflicts with the Whiteboard parameter in the API for starting a recording task. If the two Whiteboard parameters are both specified, the Whiteboard parameter in this API takes priority for recording video generation. If the Whiteboard parameter in this API is not specified, the Whiteboard parameter specified in the API for starting a recording task is used for recording video generation.
                     * @param _whiteboard Whiteboard parameters of the recording video generation task, such as the width and height of the whiteboard.

This parameter conflicts with the Whiteboard parameter in the API for starting a recording task. If the two Whiteboard parameters are both specified, the Whiteboard parameter in this API takes priority for recording video generation. If the Whiteboard parameter in this API is not specified, the Whiteboard parameter specified in the API for starting a recording task is used for recording video generation.
                     * 
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取Video splicing parameters.

This parameter conflicts with the Concat parameter in the API for starting a recording task. If the two Concat parameters are both specified, the Concat parameter in this API takes priority for video splicing. If the Concat parameter in this API is not specified, the Concat parameter specified in the API for starting a recording task is used for video splicing.
                     * @return Concat Video splicing parameters.

This parameter conflicts with the Concat parameter in the API for starting a recording task. If the two Concat parameters are both specified, the Concat parameter in this API takes priority for video splicing. If the Concat parameter in this API is not specified, the Concat parameter specified in the API for starting a recording task is used for video splicing.
                     * 
                     */
                    Concat GetConcat() const;

                    /**
                     * 设置Video splicing parameters.

This parameter conflicts with the Concat parameter in the API for starting a recording task. If the two Concat parameters are both specified, the Concat parameter in this API takes priority for video splicing. If the Concat parameter in this API is not specified, the Concat parameter specified in the API for starting a recording task is used for video splicing.
                     * @param _concat Video splicing parameters.

This parameter conflicts with the Concat parameter in the API for starting a recording task. If the two Concat parameters are both specified, the Concat parameter in this API takes priority for video splicing. If the Concat parameter in this API is not specified, the Concat parameter specified in the API for starting a recording task is used for video splicing.
                     * 
                     */
                    void SetConcat(const Concat& _concat);

                    /**
                     * 判断参数 Concat 是否已赋值
                     * @return Concat 是否已赋值
                     * 
                     */
                    bool ConcatHasBeenSet() const;

                    /**
                     * 获取Video stream mixing parameters.

This parameter conflicts with the MixStream parameter in the API for starting a recording task. If the two MixStream parameters are both specified, the MixStream parameter in this API takes priority for video stream mixing. If the MixStream parameter in this API is not specified, the MixStream parameter specified in the API for starting a recording task is used for video stream mixing.
                     * @return MixStream Video stream mixing parameters.

This parameter conflicts with the MixStream parameter in the API for starting a recording task. If the two MixStream parameters are both specified, the MixStream parameter in this API takes priority for video stream mixing. If the MixStream parameter in this API is not specified, the MixStream parameter specified in the API for starting a recording task is used for video stream mixing.
                     * 
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置Video stream mixing parameters.

This parameter conflicts with the MixStream parameter in the API for starting a recording task. If the two MixStream parameters are both specified, the MixStream parameter in this API takes priority for video stream mixing. If the MixStream parameter in this API is not specified, the MixStream parameter specified in the API for starting a recording task is used for video stream mixing.
                     * @param _mixStream Video stream mixing parameters.

This parameter conflicts with the MixStream parameter in the API for starting a recording task. If the two MixStream parameters are both specified, the MixStream parameter in this API takes priority for video stream mixing. If the MixStream parameter in this API is not specified, the MixStream parameter specified in the API for starting a recording task is used for video stream mixing.
                     * 
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     * 
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取A group of video generation parameters. It specifies the streams to be generated, whether to disable audio recording for a stream, and whether to record only low-resolution videos, etc.

This parameter conflicts with the RecordControl parameter in the API for starting a recording task. If the two RecordControl parameters are both specified, the RecordControl parameter in this API takes priority for video generation control. If the RecordControl parameter in this API is not specified, the RecordControl parameter specified in the API for starting a recording task is used for video generation control.
                     * @return RecordControl A group of video generation parameters. It specifies the streams to be generated, whether to disable audio recording for a stream, and whether to record only low-resolution videos, etc.

This parameter conflicts with the RecordControl parameter in the API for starting a recording task. If the two RecordControl parameters are both specified, the RecordControl parameter in this API takes priority for video generation control. If the RecordControl parameter in this API is not specified, the RecordControl parameter specified in the API for starting a recording task is used for video generation control.
                     * 
                     */
                    RecordControl GetRecordControl() const;

                    /**
                     * 设置A group of video generation parameters. It specifies the streams to be generated, whether to disable audio recording for a stream, and whether to record only low-resolution videos, etc.

This parameter conflicts with the RecordControl parameter in the API for starting a recording task. If the two RecordControl parameters are both specified, the RecordControl parameter in this API takes priority for video generation control. If the RecordControl parameter in this API is not specified, the RecordControl parameter specified in the API for starting a recording task is used for video generation control.
                     * @param _recordControl A group of video generation parameters. It specifies the streams to be generated, whether to disable audio recording for a stream, and whether to record only low-resolution videos, etc.

This parameter conflicts with the RecordControl parameter in the API for starting a recording task. If the two RecordControl parameters are both specified, the RecordControl parameter in this API takes priority for video generation control. If the RecordControl parameter in this API is not specified, the RecordControl parameter specified in the API for starting a recording task is used for video generation control.
                     * 
                     */
                    void SetRecordControl(const RecordControl& _recordControl);

                    /**
                     * 判断参数 RecordControl 是否已赋值
                     * @return RecordControl 是否已赋值
                     * 
                     */
                    bool RecordControlHasBeenSet() const;

                    /**
                     * 获取Internal parameter.
                     * @return ExtraData Internal parameter.
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置Internal parameter.
                     * @param _extraData Internal parameter.
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * ID of the recording task.
                     */
                    std::string m_onlineRecordTaskId;
                    bool m_onlineRecordTaskIdHasBeenSet;

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Whiteboard parameters of the recording video generation task, such as the width and height of the whiteboard.

This parameter conflicts with the Whiteboard parameter in the API for starting a recording task. If the two Whiteboard parameters are both specified, the Whiteboard parameter in this API takes priority for recording video generation. If the Whiteboard parameter in this API is not specified, the Whiteboard parameter specified in the API for starting a recording task is used for recording video generation.
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * Video splicing parameters.

This parameter conflicts with the Concat parameter in the API for starting a recording task. If the two Concat parameters are both specified, the Concat parameter in this API takes priority for video splicing. If the Concat parameter in this API is not specified, the Concat parameter specified in the API for starting a recording task is used for video splicing.
                     */
                    Concat m_concat;
                    bool m_concatHasBeenSet;

                    /**
                     * Video stream mixing parameters.

This parameter conflicts with the MixStream parameter in the API for starting a recording task. If the two MixStream parameters are both specified, the MixStream parameter in this API takes priority for video stream mixing. If the MixStream parameter in this API is not specified, the MixStream parameter specified in the API for starting a recording task is used for video stream mixing.
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * A group of video generation parameters. It specifies the streams to be generated, whether to disable audio recording for a stream, and whether to record only low-resolution videos, etc.

This parameter conflicts with the RecordControl parameter in the API for starting a recording task. If the two RecordControl parameters are both specified, the RecordControl parameter in this API takes priority for video generation control. If the RecordControl parameter in this API is not specified, the RecordControl parameter specified in the API for starting a recording task is used for video generation control.
                     */
                    RecordControl m_recordControl;
                    bool m_recordControlHasBeenSet;

                    /**
                     * Internal parameter.
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEVIDEOGENERATIONTASKREQUEST_H_
