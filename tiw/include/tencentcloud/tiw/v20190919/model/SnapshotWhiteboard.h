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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTWHITEBOARD_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTWHITEBOARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Whiteboard parameters of the whiteboard snapshot task, such as the width and height of the whiteboard.
                */
                class SnapshotWhiteboard : public AbstractModel
                {
                public:
                    SnapshotWhiteboard();
                    ~SnapshotWhiteboard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whiteboard width. Valid range: [0,2560]. Default value: 1280.
                     * @return Width Whiteboard width. Valid range: [0,2560]. Default value: 1280.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Whiteboard width. Valid range: [0,2560]. Default value: 1280.
                     * @param _width Whiteboard width. Valid range: [0,2560]. Default value: 1280.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Whiteboard height. Valid range: [0,2560]. Default value: 720.
                     * @return Height Whiteboard height. Valid range: [0,2560]. Default value: 720.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Whiteboard height. Valid range: [0,2560]. Default value: 720.
                     * @param _height Whiteboard height. Valid range: [0,2560]. Default value: 720.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Escaped JSON string of the whiteboard initial parameters, which is passed through to the Tencent Interactive Whiteboard SDK.
                     * @return InitParams Escaped JSON string of the whiteboard initial parameters, which is passed through to the Tencent Interactive Whiteboard SDK.
                     * 
                     */
                    std::string GetInitParams() const;

                    /**
                     * 设置Escaped JSON string of the whiteboard initial parameters, which is passed through to the Tencent Interactive Whiteboard SDK.
                     * @param _initParams Escaped JSON string of the whiteboard initial parameters, which is passed through to the Tencent Interactive Whiteboard SDK.
                     * 
                     */
                    void SetInitParams(const std::string& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                private:

                    /**
                     * Whiteboard width. Valid range: [0,2560]. Default value: 1280.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Whiteboard height. Valid range: [0,2560]. Default value: 720.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Escaped JSON string of the whiteboard initial parameters, which is passed through to the Tencent Interactive Whiteboard SDK.
                     */
                    std::string m_initParams;
                    bool m_initParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTWHITEBOARD_H_
