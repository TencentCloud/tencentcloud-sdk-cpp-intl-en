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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STREAMLAYOUT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STREAMLAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/LayoutParams.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Stream layout parameter
                */
                class StreamLayout : public AbstractModel
                {
                public:
                    StreamLayout();
                    ~StreamLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stream layout configuration
                     * @return LayoutParams Stream layout configuration
                     * 
                     */
                    LayoutParams GetLayoutParams() const;

                    /**
                     * 设置Stream layout configuration
                     * @param _layoutParams Stream layout configuration
                     * 
                     */
                    void SetLayoutParams(const LayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取Video stream ID
Description of the possible video stream ID values:
1. tic_record_user: the current picture is used to display the whiteboard video stream.
2. tic_substream: the current picture is used to display the auxiliary video stream.
3. Specific user ID: the current picture is used to display the video stream of a specific user.
4.Left empty: the current picture is vacant for new video stream.
                     * @return InputStreamId Video stream ID
Description of the possible video stream ID values:
1. tic_record_user: the current picture is used to display the whiteboard video stream.
2. tic_substream: the current picture is used to display the auxiliary video stream.
3. Specific user ID: the current picture is used to display the video stream of a specific user.
4.Left empty: the current picture is vacant for new video stream.
                     * 
                     */
                    std::string GetInputStreamId() const;

                    /**
                     * 设置Video stream ID
Description of the possible video stream ID values:
1. tic_record_user: the current picture is used to display the whiteboard video stream.
2. tic_substream: the current picture is used to display the auxiliary video stream.
3. Specific user ID: the current picture is used to display the video stream of a specific user.
4.Left empty: the current picture is vacant for new video stream.
                     * @param _inputStreamId Video stream ID
Description of the possible video stream ID values:
1. tic_record_user: the current picture is used to display the whiteboard video stream.
2. tic_substream: the current picture is used to display the auxiliary video stream.
3. Specific user ID: the current picture is used to display the video stream of a specific user.
4.Left empty: the current picture is vacant for new video stream.
                     * 
                     */
                    void SetInputStreamId(const std::string& _inputStreamId);

                    /**
                     * 判断参数 InputStreamId 是否已赋值
                     * @return InputStreamId 是否已赋值
                     * 
                     */
                    bool InputStreamIdHasBeenSet() const;

                    /**
                     * 获取Background color in RGB format, such as "#FF0000" for red. The default color is black. 
                     * @return BackgroundColor Background color in RGB format, such as "#FF0000" for red. The default color is black. 
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置Background color in RGB format, such as "#FF0000" for red. The default color is black. 
                     * @param _backgroundColor Background color in RGB format, such as "#FF0000" for red. The default color is black. 
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取Video filling mode.

0: self-adaption mode. Scales the video proportionally to completely display it in the specified area. In this mode, there may be black bars.
1: full-screen mode. Scales the video to make it fill the entire specified area. In this mode, no black bars will appear, but the video may not be displayed fully.
                     * @return FillMode Video filling mode.

0: self-adaption mode. Scales the video proportionally to completely display it in the specified area. In this mode, there may be black bars.
1: full-screen mode. Scales the video to make it fill the entire specified area. In this mode, no black bars will appear, but the video may not be displayed fully.
                     * 
                     */
                    int64_t GetFillMode() const;

                    /**
                     * 设置Video filling mode.

0: self-adaption mode. Scales the video proportionally to completely display it in the specified area. In this mode, there may be black bars.
1: full-screen mode. Scales the video to make it fill the entire specified area. In this mode, no black bars will appear, but the video may not be displayed fully.
                     * @param _fillMode Video filling mode.

0: self-adaption mode. Scales the video proportionally to completely display it in the specified area. In this mode, there may be black bars.
1: full-screen mode. Scales the video to make it fill the entire specified area. In this mode, no black bars will appear, but the video may not be displayed fully.
                     * 
                     */
                    void SetFillMode(const int64_t& _fillMode);

                    /**
                     * 判断参数 FillMode 是否已赋值
                     * @return FillMode 是否已赋值
                     * 
                     */
                    bool FillModeHasBeenSet() const;

                private:

                    /**
                     * Stream layout configuration
                     */
                    LayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * Video stream ID
Description of the possible video stream ID values:
1. tic_record_user: the current picture is used to display the whiteboard video stream.
2. tic_substream: the current picture is used to display the auxiliary video stream.
3. Specific user ID: the current picture is used to display the video stream of a specific user.
4.Left empty: the current picture is vacant for new video stream.
                     */
                    std::string m_inputStreamId;
                    bool m_inputStreamIdHasBeenSet;

                    /**
                     * Background color in RGB format, such as "#FF0000" for red. The default color is black. 
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * Video filling mode.

0: self-adaption mode. Scales the video proportionally to completely display it in the specified area. In this mode, there may be black bars.
1: full-screen mode. Scales the video to make it fill the entire specified area. In this mode, no black bars will appear, but the video may not be displayed fully.
                     */
                    int64_t m_fillMode;
                    bool m_fillModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STREAMLAYOUT_H_
