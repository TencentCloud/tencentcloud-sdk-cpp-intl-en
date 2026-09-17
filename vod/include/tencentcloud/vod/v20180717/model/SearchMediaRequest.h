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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TimeRange.h>
#include <tencentcloud/vod/v20180717/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SearchMedia request structure.
                */
                class SearchMediaRequest : public AbstractModel
                {
                public:
                    SearchMediaRequest();
                    ~SearchMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileIds 
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置
                     * @param _fileIds 
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Names 
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置
                     * @param _names 
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取
                     * @return NamePrefixes 
                     * 
                     */
                    std::vector<std::string> GetNamePrefixes() const;

                    /**
                     * 设置
                     * @param _namePrefixes 
                     * 
                     */
                    void SetNamePrefixes(const std::vector<std::string>& _namePrefixes);

                    /**
                     * 判断参数 NamePrefixes 是否已赋值
                     * @return NamePrefixes 是否已赋值
                     * 
                     */
                    bool NamePrefixesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Descriptions 
                     * 
                     */
                    std::vector<std::string> GetDescriptions() const;

                    /**
                     * 设置
                     * @param _descriptions 
                     * 
                     */
                    void SetDescriptions(const std::vector<std::string>& _descriptions);

                    /**
                     * 判断参数 Descriptions 是否已赋值
                     * @return Descriptions 是否已赋值
                     * 
                     */
                    bool DescriptionsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClassIds 
                     * 
                     */
                    std::vector<int64_t> GetClassIds() const;

                    /**
                     * 设置
                     * @param _classIds 
                     * 
                     */
                    void SetClassIds(const std::vector<int64_t>& _classIds);

                    /**
                     * 判断参数 ClassIds 是否已赋值
                     * @return ClassIds 是否已赋值
                     * 
                     */
                    bool ClassIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Tags 
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置
                     * @param _tags 
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Categories 
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置
                     * @param _categories 
                     * 
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceTypes 
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置
                     * @param _sourceTypes 
                     * 
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     * 
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取
                     * @return StreamIds 
                     * 
                     */
                    std::vector<std::string> GetStreamIds() const;

                    /**
                     * 设置
                     * @param _streamIds 
                     * 
                     */
                    void SetStreamIds(const std::vector<std::string>& _streamIds);

                    /**
                     * 判断参数 StreamIds 是否已赋值
                     * @return StreamIds 是否已赋值
                     * 
                     */
                    bool StreamIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExpireTime 
                     * 
                     */
                    TimeRange GetExpireTime() const;

                    /**
                     * 设置
                     * @param _expireTime 
                     * 
                     */
                    void SetExpireTime(const TimeRange& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return StorageRegions 
                     * 
                     */
                    std::vector<std::string> GetStorageRegions() const;

                    /**
                     * 设置
                     * @param _storageRegions 
                     * 
                     */
                    void SetStorageRegions(const std::vector<std::string>& _storageRegions);

                    /**
                     * 判断参数 StorageRegions 是否已赋值
                     * @return StorageRegions 是否已赋值
                     * 
                     */
                    bool StorageRegionsHasBeenSet() const;

                    /**
                     * 获取
                     * @return StorageClasses 
                     * 
                     */
                    std::vector<std::string> GetStorageClasses() const;

                    /**
                     * 设置
                     * @param _storageClasses 
                     * 
                     */
                    void SetStorageClasses(const std::vector<std::string>& _storageClasses);

                    /**
                     * 判断参数 StorageClasses 是否已赋值
                     * @return StorageClasses 是否已赋值
                     * 
                     */
                    bool StorageClassesHasBeenSet() const;

                    /**
                     * 获取
                     * @return MediaTypes 
                     * 
                     */
                    std::vector<std::string> GetMediaTypes() const;

                    /**
                     * 设置
                     * @param _mediaTypes 
                     * 
                     */
                    void SetMediaTypes(const std::vector<std::string>& _mediaTypes);

                    /**
                     * 判断参数 MediaTypes 是否已赋值
                     * @return MediaTypes 是否已赋值
                     * 
                     */
                    bool MediaTypesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewResults 
                     * 
                     */
                    std::vector<std::string> GetReviewResults() const;

                    /**
                     * 设置
                     * @param _reviewResults 
                     * 
                     */
                    void SetReviewResults(const std::vector<std::string>& _reviewResults);

                    /**
                     * 判断参数 ReviewResults 是否已赋值
                     * @return ReviewResults 是否已赋值
                     * 
                     */
                    bool ReviewResultsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TrtcSdkAppIds 
                     * 
                     */
                    std::vector<uint64_t> GetTrtcSdkAppIds() const;

                    /**
                     * 设置
                     * @param _trtcSdkAppIds 
                     * 
                     */
                    void SetTrtcSdkAppIds(const std::vector<uint64_t>& _trtcSdkAppIds);

                    /**
                     * 判断参数 TrtcSdkAppIds 是否已赋值
                     * @return TrtcSdkAppIds 是否已赋值
                     * 
                     */
                    bool TrtcSdkAppIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return TrtcRoomIds 
                     * 
                     */
                    std::vector<std::string> GetTrtcRoomIds() const;

                    /**
                     * 设置
                     * @param _trtcRoomIds 
                     * 
                     */
                    void SetTrtcRoomIds(const std::vector<std::string>& _trtcRoomIds);

                    /**
                     * 判断参数 TrtcRoomIds 是否已赋值
                     * @return TrtcRoomIds 是否已赋值
                     * 
                     */
                    bool TrtcRoomIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Filters 
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置
                     * @param _filters 
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取
                     * @return Sort 
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置
                     * @param _sort 
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取
                     * @return Offset 
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置
                     * @param _offset 
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
                     * 获取
                     * @return Limit 
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置
                     * @param _limit 
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
                     * 获取
                     * @return Text 
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置
                     * @param _text 
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceType 
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置
                     * @param _sourceType 
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return StreamId 
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置
                     * @param _streamId 
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return StartTime 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置
                     * @param _startTime 
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return EndTime 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置
                     * @param _endTime 
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vids 
                     * 
                     */
                    std::vector<std::string> GetVids() const;

                    /**
                     * 设置
                     * @param _vids 
                     * 
                     */
                    void SetVids(const std::vector<std::string>& _vids);

                    /**
                     * 判断参数 Vids 是否已赋值
                     * @return Vids 是否已赋值
                     * 
                     */
                    bool VidsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vid 
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置
                     * @param _vid 
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取
                     * @return StreamDomains 
                     * 
                     */
                    std::vector<std::string> GetStreamDomains() const;

                    /**
                     * 设置
                     * @param _streamDomains 
                     * 
                     */
                    void SetStreamDomains(const std::vector<std::string>& _streamDomains);

                    /**
                     * 判断参数 StreamDomains 是否已赋值
                     * @return StreamDomains 是否已赋值
                     * 
                     */
                    bool StreamDomainsHasBeenSet() const;

                    /**
                     * 获取
                     * @return StreamPaths 
                     * 
                     */
                    std::vector<std::string> GetStreamPaths() const;

                    /**
                     * 设置
                     * @param _streamPaths 
                     * 
                     */
                    void SetStreamPaths(const std::vector<std::string>& _streamPaths);

                    /**
                     * 判断参数 StreamPaths 是否已赋值
                     * @return StreamPaths 是否已赋值
                     * 
                     */
                    bool StreamPathsHasBeenSet() const;

                    /**
                     * 获取
                     * @return KnowledgeBases 
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBases() const;

                    /**
                     * 设置
                     * @param _knowledgeBases 
                     * 
                     */
                    void SetKnowledgeBases(const std::vector<std::string>& _knowledgeBases);

                    /**
                     * 判断参数 KnowledgeBases 是否已赋值
                     * @return KnowledgeBases 是否已赋值
                     * 
                     */
                    bool KnowledgeBasesHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_namePrefixes;
                    bool m_namePrefixesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_descriptions;
                    bool m_descriptionsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<int64_t> m_classIds;
                    bool m_classIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_streamIds;
                    bool m_streamIdsHasBeenSet;

                    /**
                     * 
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    TimeRange m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_storageRegions;
                    bool m_storageRegionsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_storageClasses;
                    bool m_storageClassesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_mediaTypes;
                    bool m_mediaTypesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_reviewResults;
                    bool m_reviewResultsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<uint64_t> m_trtcSdkAppIds;
                    bool m_trtcSdkAppIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_trtcRoomIds;
                    bool m_trtcRoomIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_vids;
                    bool m_vidsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_streamDomains;
                    bool m_streamDomainsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_streamPaths;
                    bool m_streamPathsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_knowledgeBases;
                    bool m_knowledgeBasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
