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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_

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
                * Task result type of image moderation involving inappropriate information.
                */
                class PoliticalImageResult : public AbstractModel
                {
                public:
                    PoliticalImageResult();
                    ~PoliticalImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication involves scoring inappropriate information, with a score from 0 to 100.
                     * @return Confidence Authentication involves scoring inappropriate information, with a score from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Authentication involves scoring inappropriate information, with a score from 0 to 100.
                     * @param _confidence Authentication involves scoring inappropriate information, with a score from 0 to 100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Result suggestions for authentication involving inappropriate information, value ranges from...to...
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * @return Suggestion Result suggestions for authentication involving inappropriate information, value ranges from...to...
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Result suggestions for authentication involving inappropriate information, value ranges from...to...
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * @param _suggestion Result suggestions for authentication involving inappropriate information, value ranges from...to...
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Involves inappropriate information and violative icon names.
                     * @return Name Involves inappropriate information and violative icon names.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Involves inappropriate information and violative icon names.
                     * @param _name Involves inappropriate information and violative icon names.
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
                     * 获取Coordinates of the area where inappropriate information or violation icons appear (pixel level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * @return AreaCoordSet Coordinates of the area where inappropriate information or violation icons appear (pixel level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Coordinates of the area where inappropriate information or violation icons appear (pixel level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * @param _areaCoordSet Coordinates of the area where inappropriate information or violation icons appear (pixel level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * Authentication involves scoring inappropriate information, with a score from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Result suggestions for authentication involving inappropriate information, value ranges from...to...
<li>pass;</li>
<li>review;</li>
<li>block.</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Involves inappropriate information and violative icon names.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Coordinates of the area where inappropriate information or violation icons appear (pixel level), [x1, y1, x2, y2], i.e., coordinates of the top-left corner and bottom-right corner.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_POLITICALIMAGERESULT_H_
