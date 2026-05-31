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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_BORDERFRAMESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_BORDERFRAMESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/SourceLayout.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * BorderFrameSetting
                */
                class BorderFrameSetting : public AbstractModel
                {
                public:
                    BorderFrameSetting();
                    ~BorderFrameSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return LiveSourceLayout 
                     * 
                     */
                    SourceLayout GetLiveSourceLayout() const;

                    /**
                     * 设置
                     * @param _liveSourceLayout 
                     * 
                     */
                    void SetLiveSourceLayout(const SourceLayout& _liveSourceLayout);

                    /**
                     * 判断参数 LiveSourceLayout 是否已赋值
                     * @return LiveSourceLayout 是否已赋值
                     * 
                     */
                    bool LiveSourceLayoutHasBeenSet() const;

                    /**
                     * 获取
                     * @return BackgroundImgUrl 
                     * 
                     */
                    std::string GetBackgroundImgUrl() const;

                    /**
                     * 设置
                     * @param _backgroundImgUrl 
                     * 
                     */
                    void SetBackgroundImgUrl(const std::string& _backgroundImgUrl);

                    /**
                     * 判断参数 BackgroundImgUrl 是否已赋值
                     * @return BackgroundImgUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImgUrlHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    SourceLayout m_liveSourceLayout;
                    bool m_liveSourceLayoutHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_backgroundImgUrl;
                    bool m_backgroundImgUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_BORDERFRAMESETTING_H_
