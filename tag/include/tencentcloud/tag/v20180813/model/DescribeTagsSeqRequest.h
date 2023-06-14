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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGSSEQREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGSSEQREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeTagsSeq request structure.
                */
                class DescribeTagsSeqRequest : public AbstractModel
                {
                public:
                    DescribeTagsSeqRequest();
                    ~DescribeTagsSeqRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag key, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried
                     * @return TagKey Tag key, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried
                     * @param _tagKey Tag key, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Tag value, which either exists or does not exist with the tag key. If it does not exist, all tags of the user will be queried
                     * @return TagValue Tag value, which either exists or does not exist with the tag key. If it does not exist, all tags of the user will be queried
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value, which either exists or does not exist with the tag key. If it does not exist, all tags of the user will be queried
                     * @param _tagValue Tag value, which either exists or does not exist with the tag key. If it does not exist, all tags of the user will be queried
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * @return Offset Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * @param _offset Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Default value: 15
                     * @return Limit Number of entries per page. Default value: 15
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 15
                     * @param _limit Number of entries per page. Default value: 15
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Creator `Uin`. If this parameter is blank or left empty, only `Uin` will be used as a condition for query
                     * @return CreateUin Creator `Uin`. If this parameter is blank or left empty, only `Uin` will be used as a condition for query
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `Uin`. If this parameter is blank or left empty, only `Uin` will be used as a condition for query
                     * @param _createUin Creator `Uin`. If this parameter is blank or left empty, only `Uin` will be used as a condition for query
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Tag key array, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried. If it is passed in together with `TagKey`, it will be used and the `TagKey` will be ignored.
                     * @return TagKeys Tag key array, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried. If it is passed in together with `TagKey`, it will be used and the `TagKey` will be ignored.
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Tag key array, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried. If it is passed in together with `TagKey`, it will be used and the `TagKey` will be ignored.
                     * @param _tagKeys Tag key array, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried. If it is passed in together with `TagKey`, it will be used and the `TagKey` will be ignored.
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取Whether to show project tag
                     * @return ShowProject Whether to show project tag
                     * 
                     */
                    uint64_t GetShowProject() const;

                    /**
                     * 设置Whether to show project tag
                     * @param _showProject Whether to show project tag
                     * 
                     */
                    void SetShowProject(const uint64_t& _showProject);

                    /**
                     * 判断参数 ShowProject 是否已赋值
                     * @return ShowProject 是否已赋值
                     * 
                     */
                    bool ShowProjectHasBeenSet() const;

                private:

                    /**
                     * Tag key, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value, which either exists or does not exist with the tag key. If it does not exist, all tags of the user will be queried
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 15
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Creator `Uin`. If this parameter is blank or left empty, only `Uin` will be used as a condition for query
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Tag key array, which either exists or does not exist with the tag value. If it does not exist, all tags of the user will be queried. If it is passed in together with `TagKey`, it will be used and the `TagKey` will be ignored.
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * Whether to show project tag
                     */
                    uint64_t m_showProject;
                    bool m_showProjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGSSEQREQUEST_H_
