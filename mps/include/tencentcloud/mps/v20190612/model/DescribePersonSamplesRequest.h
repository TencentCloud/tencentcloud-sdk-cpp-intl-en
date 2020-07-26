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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribePersonSamples request structure.
                */
                class DescribePersonSamplesRequest : public AbstractModel
                {
                public:
                    DescribePersonSamplesRequest();
                    ~DescribePersonSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pulled figure type. Valid values:
<li>UserDefine: Custom figure library;</li>
<li>Default: Default figure library.</li>

Default value: UserDefine (the custom figure library will be pulled.)
Note: The default figure library can be pulled only through "figure name" or "figure ID + figure name", and only one face image will be returned.
                     * @return Type Pulled figure type. Valid values:
<li>UserDefine: Custom figure library;</li>
<li>Default: Default figure library.</li>

Default value: UserDefine (the custom figure library will be pulled.)
Note: The default figure library can be pulled only through "figure name" or "figure ID + figure name", and only one face image will be returned.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Pulled figure type. Valid values:
<li>UserDefine: Custom figure library;</li>
<li>Default: Default figure library.</li>

Default value: UserDefine (the custom figure library will be pulled.)
Note: The default figure library can be pulled only through "figure name" or "figure ID + figure name", and only one face image will be returned.
                     * @param Type Pulled figure type. Valid values:
<li>UserDefine: Custom figure library;</li>
<li>Default: Default figure library.</li>

Default value: UserDefine (the custom figure library will be pulled.)
Note: The default figure library can be pulled only through "figure name" or "figure ID + figure name", and only one face image will be returned.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Figure ID. Array length limit: 100.
                     * @return PersonIds Figure ID. Array length limit: 100.
                     */
                    std::vector<std::string> GetPersonIds() const;

                    /**
                     * 设置Figure ID. Array length limit: 100.
                     * @param PersonIds Figure ID. Array length limit: 100.
                     */
                    void SetPersonIds(const std::vector<std::string>& _personIds);

                    /**
                     * 判断参数 PersonIds 是否已赋值
                     * @return PersonIds 是否已赋值
                     */
                    bool PersonIdsHasBeenSet() const;

                    /**
                     * 获取Figure name. Array length limit: 20.
                     * @return Names Figure name. Array length limit: 20.
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Figure name. Array length limit: 20.
                     * @param Names Figure name. Array length limit: 20.
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取Figure tag. Array length limit: 20.
                     * @return Tags Figure tag. Array length limit: 20.
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Figure tag. Array length limit: 20.
                     * @param Tags Figure tag. Array length limit: 20.
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param Offset Paging offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 100. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 100. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 100. Maximum value: 100.
                     * @param Limit Number of returned entries. Default value: 100. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Pulled figure type. Valid values:
<li>UserDefine: Custom figure library;</li>
<li>Default: Default figure library.</li>

Default value: UserDefine (the custom figure library will be pulled.)
Note: The default figure library can be pulled only through "figure name" or "figure ID + figure name", and only one face image will be returned.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Figure ID. Array length limit: 100.
                     */
                    std::vector<std::string> m_personIds;
                    bool m_personIdsHasBeenSet;

                    /**
                     * Figure name. Array length limit: 20.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Figure tag. Array length limit: 20.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 100. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
