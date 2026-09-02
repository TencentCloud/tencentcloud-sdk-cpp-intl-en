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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONDITIONMATCH_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONDITIONMATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Advanced mirror conditional matching (one and only one of the three match strings is non-empty)
                */
                class ConditionMatch : public AbstractModel
                {
                public:
                    ConditionMatch();
                    ~ConditionMatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image ID match string (select one of the three, one and only one can be non-empty)</p>
                     * @return ImageIDMatchString <p>Image ID match string (select one of the three, one and only one can be non-empty)</p>
                     * 
                     */
                    std::string GetImageIDMatchString() const;

                    /**
                     * 设置<p>Image ID match string (select one of the three, one and only one can be non-empty)</p>
                     * @param _imageIDMatchString <p>Image ID match string (select one of the three, one and only one can be non-empty)</p>
                     * 
                     */
                    void SetImageIDMatchString(const std::string& _imageIDMatchString);

                    /**
                     * 判断参数 ImageIDMatchString 是否已赋值
                     * @return ImageIDMatchString 是否已赋值
                     * 
                     */
                    bool ImageIDMatchStringHasBeenSet() const;

                    /**
                     * 获取<p>Image name match string (choose one of three, one and only one is non-empty)</p>
                     * @return ImageNameMatchString <p>Image name match string (choose one of three, one and only one is non-empty)</p>
                     * 
                     */
                    std::string GetImageNameMatchString() const;

                    /**
                     * 设置<p>Image name match string (choose one of three, one and only one is non-empty)</p>
                     * @param _imageNameMatchString <p>Image name match string (choose one of three, one and only one is non-empty)</p>
                     * 
                     */
                    void SetImageNameMatchString(const std::string& _imageNameMatchString);

                    /**
                     * 判断参数 ImageNameMatchString 是否已赋值
                     * @return ImageNameMatchString 是否已赋值
                     * 
                     */
                    bool ImageNameMatchStringHasBeenSet() const;

                    /**
                     * 获取<p>Image address match string (Select one of the three. One and only one is non-empty)</p>
                     * @return ImageAddressMatchString <p>Image address match string (Select one of the three. One and only one is non-empty)</p>
                     * 
                     */
                    std::string GetImageAddressMatchString() const;

                    /**
                     * 设置<p>Image address match string (Select one of the three. One and only one is non-empty)</p>
                     * @param _imageAddressMatchString <p>Image address match string (Select one of the three. One and only one is non-empty)</p>
                     * 
                     */
                    void SetImageAddressMatchString(const std::string& _imageAddressMatchString);

                    /**
                     * 判断参数 ImageAddressMatchString 是否已赋值
                     * @return ImageAddressMatchString 是否已赋值
                     * 
                     */
                    bool ImageAddressMatchStringHasBeenSet() const;

                    /**
                     * 获取<p>Match condition. Value: EQUALS-equal to/NOT_EQUALS-not equal to/STARTS_WITH-starting with/NOT_STARTS_WITH-not starting with/ENDS_WITH-ending with/NOT_ENDS_WITH-not ending with/CONTAINS-containing/NOT_CONTAINS-excluding</p>
                     * @return MatchType <p>Match condition. Value: EQUALS-equal to/NOT_EQUALS-not equal to/STARTS_WITH-starting with/NOT_STARTS_WITH-not starting with/ENDS_WITH-ending with/NOT_ENDS_WITH-not ending with/CONTAINS-containing/NOT_CONTAINS-excluding</p>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>Match condition. Value: EQUALS-equal to/NOT_EQUALS-not equal to/STARTS_WITH-starting with/NOT_STARTS_WITH-not starting with/ENDS_WITH-ending with/NOT_ENDS_WITH-not ending with/CONTAINS-containing/NOT_CONTAINS-excluding</p>
                     * @param _matchType <p>Match condition. Value: EQUALS-equal to/NOT_EQUALS-not equal to/STARTS_WITH-starting with/NOT_STARTS_WITH-not starting with/ENDS_WITH-ending with/NOT_ENDS_WITH-not ending with/CONTAINS-containing/NOT_CONTAINS-excluding</p>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Image ID match string (select one of the three, one and only one can be non-empty)</p>
                     */
                    std::string m_imageIDMatchString;
                    bool m_imageIDMatchStringHasBeenSet;

                    /**
                     * <p>Image name match string (choose one of three, one and only one is non-empty)</p>
                     */
                    std::string m_imageNameMatchString;
                    bool m_imageNameMatchStringHasBeenSet;

                    /**
                     * <p>Image address match string (Select one of the three. One and only one is non-empty)</p>
                     */
                    std::string m_imageAddressMatchString;
                    bool m_imageAddressMatchStringHasBeenSet;

                    /**
                     * <p>Match condition. Value: EQUALS-equal to/NOT_EQUALS-not equal to/STARTS_WITH-starting with/NOT_STARTS_WITH-not starting with/ENDS_WITH-ending with/NOT_ENDS_WITH-not ending with/CONTAINS-containing/NOT_CONTAINS-excluding</p>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONDITIONMATCH_H_
