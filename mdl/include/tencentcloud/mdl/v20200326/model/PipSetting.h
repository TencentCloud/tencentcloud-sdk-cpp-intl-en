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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PIPSETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PIPSETTING_H_

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
                * 
                */
                class PipSetting : public AbstractModel
                {
                public:
                    PipSetting();
                    ~PipSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return AudioSelection 
                     * 
                     */
                    std::string GetAudioSelection() const;

                    /**
                     * 设置
                     * @param _audioSelection 
                     * 
                     */
                    void SetAudioSelection(const std::string& _audioSelection);

                    /**
                     * 判断参数 AudioSelection 是否已赋值
                     * @return AudioSelection 是否已赋值
                     * 
                     */
                    bool AudioSelectionHasBeenSet() const;

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
                     * @return AdSourceLayout 
                     * 
                     */
                    SourceLayout GetAdSourceLayout() const;

                    /**
                     * 设置
                     * @param _adSourceLayout 
                     * 
                     */
                    void SetAdSourceLayout(const SourceLayout& _adSourceLayout);

                    /**
                     * 判断参数 AdSourceLayout 是否已赋值
                     * @return AdSourceLayout 是否已赋值
                     * 
                     */
                    bool AdSourceLayoutHasBeenSet() const;

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

                    /**
                     * 获取
                     * @return AdSourceUrl 
                     * 
                     */
                    std::string GetAdSourceUrl() const;

                    /**
                     * 设置
                     * @param _adSourceUrl 
                     * 
                     */
                    void SetAdSourceUrl(const std::string& _adSourceUrl);

                    /**
                     * 判断参数 AdSourceUrl 是否已赋值
                     * @return AdSourceUrl 是否已赋值
                     * 
                     */
                    bool AdSourceUrlHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_audioSelection;
                    bool m_audioSelectionHasBeenSet;

                    /**
                     * 
                     */
                    SourceLayout m_liveSourceLayout;
                    bool m_liveSourceLayoutHasBeenSet;

                    /**
                     * 
                     */
                    SourceLayout m_adSourceLayout;
                    bool m_adSourceLayoutHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_backgroundImgUrl;
                    bool m_backgroundImgUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_adSourceUrl;
                    bool m_adSourceUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PIPSETTING_H_
