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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FACECONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FACECONFIGUREINFO_H_

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
                * Face recognition task control parameter
                */
                class FaceConfigureInfo : public AbstractModel
                {
                public:
                    FaceConfigureInfo();
                    ~FaceConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Face recognition task switch. Available values:</p><li>ON: enable intelligent face recognition task;</li><li>OFF: disable intelligent face recognition task.</li>
                     * @return Switch <p>Face recognition task switch. Available values:</p><li>ON: enable intelligent face recognition task;</li><li>OFF: disable intelligent face recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Face recognition task switch. Available values:</p><li>ON: enable intelligent face recognition task;</li><li>OFF: disable intelligent face recognition task.</li>
                     * @param _switch <p>Face recognition task switch. Available values:</p><li>ON: enable intelligent face recognition task;</li><li>OFF: disable intelligent face recognition task.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Face recognition filter score. When the recognition result reaches this score or above, the recognition result will be returned. Default: 95 points. Value range: 0-100.</p>
                     * @return Score <p>Face recognition filter score. When the recognition result reaches this score or above, the recognition result will be returned. Default: 95 points. Value range: 0-100.</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>Face recognition filter score. When the recognition result reaches this score or above, the recognition result will be returned. Default: 95 points. Value range: 0-100.</p>
                     * @param _score <p>Face recognition filter score. When the recognition result reaches this score or above, the recognition result will be returned. Default: 95 points. Value range: 0-100.</p>
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>Filter tag for default characters, specifying the tags of default characters to return. If not filled or left empty, all default character results will be returned. Available tag values:</p><li>entertainment: entertainment star;</li><li>sport: sports celebrity;</li><li>politician: relevant people.</li>
                     * @return DefaultLibraryLabelSet <p>Filter tag for default characters, specifying the tags of default characters to return. If not filled or left empty, all default character results will be returned. Available tag values:</p><li>entertainment: entertainment star;</li><li>sport: sports celebrity;</li><li>politician: relevant people.</li>
                     * 
                     */
                    std::vector<std::string> GetDefaultLibraryLabelSet() const;

                    /**
                     * 设置<p>Filter tag for default characters, specifying the tags of default characters to return. If not filled or left empty, all default character results will be returned. Available tag values:</p><li>entertainment: entertainment star;</li><li>sport: sports celebrity;</li><li>politician: relevant people.</li>
                     * @param _defaultLibraryLabelSet <p>Filter tag for default characters, specifying the tags of default characters to return. If not filled or left empty, all default character results will be returned. Available tag values:</p><li>entertainment: entertainment star;</li><li>sport: sports celebrity;</li><li>politician: relevant people.</li>
                     * 
                     */
                    void SetDefaultLibraryLabelSet(const std::vector<std::string>& _defaultLibraryLabelSet);

                    /**
                     * 判断参数 DefaultLibraryLabelSet 是否已赋值
                     * @return DefaultLibraryLabelSet 是否已赋值
                     * 
                     */
                    bool DefaultLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取<p>Filter tags for user-defined characters, specifying the tags of user-defined characters to return. If not specified or empty, all user-defined character results are returned.<br>The number of tags can be up to 100, and each tag can be up to 16 characters in length.</p>
                     * @return UserDefineLibraryLabelSet <p>Filter tags for user-defined characters, specifying the tags of user-defined characters to return. If not specified or empty, all user-defined character results are returned.<br>The number of tags can be up to 100, and each tag can be up to 16 characters in length.</p>
                     * 
                     */
                    std::vector<std::string> GetUserDefineLibraryLabelSet() const;

                    /**
                     * 设置<p>Filter tags for user-defined characters, specifying the tags of user-defined characters to return. If not specified or empty, all user-defined character results are returned.<br>The number of tags can be up to 100, and each tag can be up to 16 characters in length.</p>
                     * @param _userDefineLibraryLabelSet <p>Filter tags for user-defined characters, specifying the tags of user-defined characters to return. If not specified or empty, all user-defined character results are returned.<br>The number of tags can be up to 100, and each tag can be up to 16 characters in length.</p>
                     * 
                     */
                    void SetUserDefineLibraryLabelSet(const std::vector<std::string>& _userDefineLibraryLabelSet);

                    /**
                     * 判断参数 UserDefineLibraryLabelSet 是否已赋值
                     * @return UserDefineLibraryLabelSet 是否已赋值
                     * 
                     */
                    bool UserDefineLibraryLabelSetHasBeenSet() const;

                    /**
                     * 获取<p>Figure library selection. Available values:</p><li>Default: use the default figure library;</li><li>UserDefine: use a user-defined figure library.</li><li>All: use both the default and user-defined figure libraries.</li>Default value: All, use the system default figure library and user-defined figure library.
                     * @return FaceLibrary <p>Figure library selection. Available values:</p><li>Default: use the default figure library;</li><li>UserDefine: use a user-defined figure library.</li><li>All: use both the default and user-defined figure libraries.</li>Default value: All, use the system default figure library and user-defined figure library.
                     * 
                     */
                    std::string GetFaceLibrary() const;

                    /**
                     * 设置<p>Figure library selection. Available values:</p><li>Default: use the default figure library;</li><li>UserDefine: use a user-defined figure library.</li><li>All: use both the default and user-defined figure libraries.</li>Default value: All, use the system default figure library and user-defined figure library.
                     * @param _faceLibrary <p>Figure library selection. Available values:</p><li>Default: use the default figure library;</li><li>UserDefine: use a user-defined figure library.</li><li>All: use both the default and user-defined figure libraries.</li>Default value: All, use the system default figure library and user-defined figure library.
                     * 
                     */
                    void SetFaceLibrary(const std::string& _faceLibrary);

                    /**
                     * 判断参数 FaceLibrary 是否已赋值
                     * @return FaceLibrary 是否已赋值
                     * 
                     */
                    bool FaceLibraryHasBeenSet() const;

                private:

                    /**
                     * <p>Face recognition task switch. Available values:</p><li>ON: enable intelligent face recognition task;</li><li>OFF: disable intelligent face recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Face recognition filter score. When the recognition result reaches this score or above, the recognition result will be returned. Default: 95 points. Value range: 0-100.</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>Filter tag for default characters, specifying the tags of default characters to return. If not filled or left empty, all default character results will be returned. Available tag values:</p><li>entertainment: entertainment star;</li><li>sport: sports celebrity;</li><li>politician: relevant people.</li>
                     */
                    std::vector<std::string> m_defaultLibraryLabelSet;
                    bool m_defaultLibraryLabelSetHasBeenSet;

                    /**
                     * <p>Filter tags for user-defined characters, specifying the tags of user-defined characters to return. If not specified or empty, all user-defined character results are returned.<br>The number of tags can be up to 100, and each tag can be up to 16 characters in length.</p>
                     */
                    std::vector<std::string> m_userDefineLibraryLabelSet;
                    bool m_userDefineLibraryLabelSetHasBeenSet;

                    /**
                     * <p>Figure library selection. Available values:</p><li>Default: use the default figure library;</li><li>UserDefine: use a user-defined figure library.</li><li>All: use both the default and user-defined figure libraries.</li>Default value: All, use the system default figure library and user-defined figure library.
                     */
                    std::string m_faceLibrary;
                    bool m_faceLibraryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FACECONFIGUREINFO_H_
